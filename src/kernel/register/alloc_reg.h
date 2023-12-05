#include <memory.h>

#include "v_register.h"
#include "proc.h"

class AllocReg
{
    typedef virtual_register Reg;

public:
    AllocReg();
    ~AllocReg();

    void RegInitWithProc(proc* proc);

public:
    Reg* vRegister;
};