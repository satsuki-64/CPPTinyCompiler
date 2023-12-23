#include <stdlib.h>
#include <memory.h>

#include "proc.h"

#define NUMBEROFPROC 4   // 进程数
#define ALLOCFAIL -1
#define ALLOCSUCC 1

class AllocProc
{
public:
    proc* procPoll[NUMBEROFPROC];

public:
    AllocProc();
    ~AllocProc();

    void alloc();
    void sleep();
    void exit();

private:
    int alloc(proc* p);
    void free(proc* p);
};