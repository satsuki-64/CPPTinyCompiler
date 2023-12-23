#include "alloc_proc.h"
#include "alloc_reg.h"
#include "instruction_eval.h"

#include <iostream>
using namespace std;

class Kernel
{
public:
    Kernel()
    {
        procManager = new AllocProc();
        regManager = new AllocReg();
        instructionEval = new InstructionEval(regManager->vRegister);

        for(int i = 0;i<NUMBEROFPROC;i++)
        {
            procManager->alloc();
        }
        
        testProc = procManager->procPoll[0];

        regManager->RegInitWithProc(testProc);

    };
    ~Kernel()
    {
        delete procManager;
        delete regManager;
        delete instructionEval;
    };

    void Test()
    {        
        instructionEval->vregister->ax = 0;
        int i = 0;
        testProc->text[i++] = instructionEval->eval(INSTRUCTION_SET::loadI);
        testProc->text[i++] = 10;
        testProc->text[i++] = instructionEval->eval(INSTRUCTION_SET::push);
        testProc->text[i++] = instructionEval->eval(INSTRUCTION_SET::loadI);

        
    }

public:
    proc* testProc;

private:
    // 待重构：使用sharedpointer
    AllocProc* procManager;
    AllocReg* regManager;
    InstructionEval* instructionEval;
    
};

