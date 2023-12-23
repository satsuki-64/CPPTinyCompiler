#pragma once

// 指令集符号
enum INSTRUCTION_SET
{
    // 基础指令
    load,    // MEMORY（r1）-> r2，表示寄存器数据加载 
    loadI,   // c1  -> r2，表示从一个常数数据加载至寄存器
    cload,   // character，表示字符的load过程

    store,   // r1 -> MEMORY（r2）
    cstore,  // 字符类型的store过程

    push,    // 入栈操作，将 ax 的值放入栈中
    jmp,     // 跳转指令，无条件地将PC寄存器设置为指定的地址，因此需要参数
    jz,      // 条件判断的跳转，ax为零或不为零情况下的跳转
    jnz,

    // 函数调用
    call,    // 跳转到目标地址的子函数
    ret,     // 从子函数返回

    ent,     // enter,用于保存当前的栈指针，同时在栈上保留空间，存放局部变量
    adj,
    lev,
    lea,

    // 常用操作符
    OR,
    XOR,
    AND,
    EQ,
    NE,
    LT,
    LE,
    GT,
    GE,
    SHL,
    SHR,
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,

    // 将常见的系统调用进行封装
    EXIT,
    OPEN,
    CLOS,
    READ,
    MALC,
    MSET,
    MCMP,
};