#include "alloc_proc.h"

AllocProc::AllocProc()
{
    for(int i = 0;i<NUMBEROFPROC;i++)
    {
        //为每个Proc分配内存，改变其状态
        procPoll[i] = (proc*)(malloc(sizeof(proc)));
        procPoll[i]->state = UNUSED;
    }
}

AllocProc::~AllocProc()
{
    
}

void AllocProc::alloc()
{
    int i = 0;
    while(i<NUMBEROFPROC)
    {
        alloc(procPoll[i]);
        i++;
    }
}

int AllocProc::alloc(proc* p)
{
    //[(POOLSIZE*3)/sizeof(int)]
    int* mem = (int*)malloc(POOLSIZE*3);

    // 分配stack
    p->stack = &mem[(POOLSIZE*0)/sizeof(int*)];

    // 分配data
    p->data = &mem[(POOLSIZE*1)/sizeof(int*)];

    // 分配text
    p->text = &mem[(POOLSIZE*2)/sizeof(int*)];

    p->state = USED;

    memset(p->stack,0,POOLSIZE);
    memset(p->data,0,POOLSIZE);
    memset(p->text,0,POOLSIZE);
}