// 指令集符号
enum INSTRUCTION_SET
{
    load,    // MEMORY（r1）-> r2，表示寄存器数据加载 
    loadI,   // c1  -> r2，表示从一个常数数据加载至寄存器
    cload,   // character，表示字符的load过程

    store,   // r1 -> MEMORY（r2）
    cstore,  // 字符类型的store过程
    sstore,  // 表示stack store，把当前ax中的数据放入栈顶地址中
    scstore, // 表示stack character store，把当前的ax数据作为字符存入到栈顶地址当中
};