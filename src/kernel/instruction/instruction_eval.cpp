#include "instruction_eval.h"

template<typename SRC,typename TAG>
void InstructionEval::eval(Inst inst,SRC src,TAG target)
{
    Inst op = inst;

    switch (op)
    {
        case load:
            
            break;
        
        case loadI:
            // c1  -> r2，表示从一个常数数据加载至寄存器
            int num = (int)src;
            int* ptrToReg = (int*)&target;
            
            *ptrToReg = num;

            break;

        case cload:
            char* charact = (char*)src;
            target = (int*)&charact;
            break;

        default:
            break;
    }
}