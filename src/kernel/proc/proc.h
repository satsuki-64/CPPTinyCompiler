#pragma once

#include "v_register.h"

#define POOLSIZE 262144  // 256 * 1024

enum PROCSTATE 
{  

    UNUSED = 0,  

    USED = 1,

    SLEEPING = 2,  

    RUNNING = 3,  

    ZOMBIE = 4
};

struct proc 
{   
    enum PROCSTATE state;        // 当前进程所处的状态  
    struct virtual_register* context;      // 切换进程所需要保存的进程状态
    int pid;                     // 进程 ID 号, pid  
    char name[16];               // 进程名称  

    int sz;           // 进程所占的内存大小  
    int* stack;       // 栈的虚拟地址 
    int* text;        // 进程的代码区
    int* data;        // 进程的数据区
};
