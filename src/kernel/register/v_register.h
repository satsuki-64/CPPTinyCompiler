// 寄存器组
struct virtual_register
{
    unsigned int *pc;
    unsigned int *bp;
    unsigned int *sp;

    int* ax;
    int* bx;
    int* cx;
    
    int cycle;
};