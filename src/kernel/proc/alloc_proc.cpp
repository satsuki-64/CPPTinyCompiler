#include "alloc_proc.h"

allocproc::allocproc()
{
    for(int i = 0;i<NUMBEROFPROC;i++)
    {
        //为每个Proc分配内存，改变其状态
        procPoll[i] = (proc*)(malloc(sizeof(proc)));
        procPoll[i]->state = UNUSED;
    }
}

allocproc::~allocproc()
{
    
}

void allocproc::alloc()
{
    int i = 0;
    while(i<NUMBEROFPROC)
    {
        alloc(procPoll[i]);
        i++;
    }
}

int allocproc::alloc(proc* p)
{
    //[(POOLSIZE*3)/sizeof(unsigned int)]
    unsigned int* mem = (unsigned int*)malloc(POOLSIZE*3);

    // 分配stack
    p->stack = &mem[(POOLSIZE*0)/sizeof(unsigned int*)];

    // 分配data
    p->data = &mem[(POOLSIZE*1)/sizeof(unsigned int*)];

    // 分配text
    p->text = &mem[(POOLSIZE*2)/sizeof(unsigned int*)];

    p->state = USED;

    memset(p->stack,0,POOLSIZE);
    memset(p->data,0,POOLSIZE);
    memset(p->text,0,POOLSIZE);
}