#include <memory.h>

#include "v_register.h"
#include "proc.h"

class AllocReg
{
public:
    typedef virtual_register Reg;   

    AllocReg();
    ~AllocReg();

    void RegInitWithProc(proc* proc);

    // 还未实现
    void RegInitWithProc(proc* procNew,proc* procOld);
    
public:
    Reg* vRegister;
};