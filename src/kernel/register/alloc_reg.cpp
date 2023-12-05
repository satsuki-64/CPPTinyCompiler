#include "alloc_reg.h"

AllocReg::AllocReg()
{
    vRegister->bp = nullptr;
    vRegister->sp = nullptr;
    vRegister->pc = nullptr;

    vRegister->cycle = -1;
    vRegister->ax = -1;
    vRegister->bx = -1;
    vRegister->cx = -1;
}

AllocReg::~AllocReg()
{

}

void AllocReg::RegInitWithProc(proc* proc)
{
    memset(proc->stack,0,POOLSIZE*sizeof(unsigned int*));
    memset(proc->data,0,POOLSIZE*sizeof(unsigned int*));
    memset(proc->text,0,POOLSIZE*sizeof(unsigned int*));

    vRegister->bp = proc->stack + POOLSIZE*sizeof(unsigned int*);
    vRegister->sp = vRegister->bp;
    
    vRegister->ax = 0;
    vRegister->bx = 0;
    vRegister->cx = 0;
}