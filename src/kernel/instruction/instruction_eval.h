#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <iostream>

#include "v_instruction_set.h"
#include "v_register.h"

class InstructionEval
{    
public:
    virtual_register* vregister;

public:
    InstructionEval(virtual_register* vregister)
    {
        this->vregister = vregister;
    }

    int eval(const enum INSTRUCTION_SET inst)
    {
        INSTRUCTION_SET instTmp = inst;

        if(inst == INSTRUCTION_SET::load)
        {
            vregister->ax = *(int*)vregister->ax;
        }

        if(inst == INSTRUCTION_SET::loadI)
        {
            vregister->ax = *(vregister->pc)++;
        }

        if(inst == INSTRUCTION_SET::cload)
        {
            vregister->ax = *(char*)vregister->ax;
        }
        
        if(inst == INSTRUCTION_SET::store)
        {
            *(int*)*(vregister->sp)++ = vregister->ax;
        }

        if(inst == INSTRUCTION_SET::cstore)
        {
            vregister->ax =  *(char*)*(vregister->sp)++ = vregister->ax;
        }

        if(inst == INSTRUCTION_SET::push)
        {
            *--(vregister->sp) = vregister->ax;
        }

        // PC当中需要永远跳向的地址，因此需要进行参数传递
        if(inst == INSTRUCTION_SET::jmp)
        {
            vregister->pc = (int*)*(vregister->pc);
        }

        if(inst == INSTRUCTION_SET::jz)
        {
            vregister->pc = vregister->ax ? vregister-> pc + 1 : (int*)*vregister->pc;
        }
        
        if(inst == INSTRUCTION_SET::jnz)
        {
            vregister->pc = vregister->ax ? (int*)*vregister->pc : vregister->pc + 1;
        }

        if(inst == INSTRUCTION_SET::call)
        {
            *--(vregister->sp) = (int)(vregister->pc + 1); // 存储地址信息，在ret时读取
            vregister->pc = (int*)*vregister->pc;  // 执行跳转，将pc指针指向子函数地址
        }

        if(inst == INSTRUCTION_SET::ent)
        {
            *--(vregister->sp) = (int)vregister->bp;
            vregister->bp = vregister->sp;
            vregister->sp = vregister->sp - *(vregister->pc)++;
        }

        if(inst == INSTRUCTION_SET::adj)
        {
            (vregister->sp) = (vregister->sp) + *(vregister->pc)++;
        }

        if(inst == INSTRUCTION_SET::lev)
        {
            (vregister->sp) = (vregister->bp); 
            (vregister->bp) = (int *)*(vregister->sp)++;
            (vregister->pc) = (int *)*(vregister->sp)++;
        }

        if(inst == INSTRUCTION_SET::lea)
        {
            (vregister->ax) = (int)((vregister->bp) + *(vregister->pc)++);
        }

        if(inst == INSTRUCTION_SET::OR)  (vregister->ax) = *(vregister->sp)++ | (vregister->ax);
        if(inst == INSTRUCTION_SET::XOR) (vregister->ax) = *(vregister->sp)++ ^ (vregister->ax);
        if(inst == INSTRUCTION_SET::AND) (vregister->ax) = *(vregister->sp)++ & (vregister->ax);
        if(inst == INSTRUCTION_SET::EQ)  (vregister->ax) = *(vregister->sp)++ == (vregister->ax);
        if(inst == INSTRUCTION_SET::NE)  (vregister->ax) = *(vregister->sp)++ != (vregister->ax);
        if(inst == INSTRUCTION_SET::LT)  (vregister->ax) = *(vregister->sp)++ < (vregister->ax);
        if(inst == INSTRUCTION_SET::LE)  (vregister->ax) = *(vregister->sp)++ <= (vregister->ax);
        if(inst == INSTRUCTION_SET::GT)  (vregister->ax) = *(vregister->sp)++ >  (vregister->ax);
        if(inst == INSTRUCTION_SET::GE)  (vregister->ax) = *(vregister->sp)++ >= (vregister->ax);
        if(inst == INSTRUCTION_SET::SHL) (vregister->ax) = *(vregister->sp)++ << (vregister->ax);
        if(inst == INSTRUCTION_SET::SHR) (vregister->ax) = *(vregister->sp)++ >> (vregister->ax);
        if(inst == INSTRUCTION_SET::ADD) (vregister->ax) = *(vregister->sp)++ + (vregister->ax);
        if(inst == INSTRUCTION_SET::SUB) (vregister->ax) = *(vregister->sp)++ - (vregister->ax);
        if(inst == INSTRUCTION_SET::MUL) (vregister->ax) = *(vregister->sp)++ * (vregister->ax);
        if(inst == INSTRUCTION_SET::DIV) (vregister->ax) = *(vregister->sp)++ / (vregister->ax);
        if(inst == INSTRUCTION_SET::MOD) (vregister->ax) = *(vregister->sp)++ % (vregister->ax);
        

        if(inst == INSTRUCTION_SET::EXIT) 
        { 
            printf("exit(%d)", *(vregister->sp)); 
            return *(vregister->sp);
        }
        if(inst == INSTRUCTION_SET::OPEN) 
        { 
            (vregister->ax) = open((char *)(vregister->sp)[1], (vregister->sp)[0]); 
        }
        if(inst == INSTRUCTION_SET::CLOS) 
        { 
            (vregister->ax) = close(*(vregister->sp));
        }
        if(inst == INSTRUCTION_SET::READ) 
        { 
            (vregister->ax) = read((vregister->sp)[2], (char *)(vregister->sp)[1], *(vregister->sp)); 
        }
        if(inst == INSTRUCTION_SET::MALC) 
        { 
            (vregister->ax) = (int)malloc(*(vregister->sp));
        }
        if(inst == INSTRUCTION_SET::MSET) 
        { 
            (vregister->ax) = (int)memset((char *)(vregister->sp)[2], (vregister->sp)[1], *(vregister->sp));
        }
        if(inst == INSTRUCTION_SET::MCMP) 
        { 
            (vregister->ax) = memcmp((char *)(vregister->sp)[2], (char *)(vregister->sp)[1], *(vregister->sp));
        }

        return 0;
    };

private:
    InstructionEval();
};