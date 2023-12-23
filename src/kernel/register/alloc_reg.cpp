#include "alloc_reg.h"

// 待重构：全部重构成静态函数
AllocReg::AllocReg()
{
    vRegister = new Reg();

    vRegister->bp = nullptr;
    vRegister->sp = nullptr;
    vRegister->pc = nullptr;

    vRegister->cycle = -1;
    vRegister->ax = 0;
    vRegister->bx = 0;
    vRegister->cx = 0;
}

AllocReg::~AllocReg()
{

}

// 在使用新进程时，初始化当前寄存器信息
void AllocReg::RegInitWithProc(proc* proc)
{
    memset(proc->stack,0,POOLSIZE*sizeof(int*));
    memset(proc->data,0,POOLSIZE*sizeof(int*));
    memset(proc->text,0,POOLSIZE*sizeof(int*));

    vRegister->bp = proc->stack + POOLSIZE*sizeof(int*);
    vRegister->sp = vRegister->bp;
    
    vRegister->ax = 0;
    vRegister->bx = 0;
    vRegister->cx = 0;

    proc->context = vRegister;
}

