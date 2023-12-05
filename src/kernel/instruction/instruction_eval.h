#include "v_instruction_set.h"

class InstructionEval
{
typedef INSTRUCTION_SET Inst;
    
public:
    template<typename SRC,typename TAG>
    void eval(Inst inst,SRC src,TAG target);

};