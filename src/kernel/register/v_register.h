#pragma once

// 寄存器组
struct virtual_register
{
    int *bp;
    int *sp;
    int *pc;

    int ax;
    int bx;
    int cx;
    
    int cycle;
};