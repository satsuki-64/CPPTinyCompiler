#include "core.h"

using namespace Compiler;

int main(int argc,char **argv)
{
    cout << "Hello,World!" << endl;

    Scan scan;
    scan.ReadSrcFile(argc,argv);

    allocproc alloc;
    alloc.alloc();

    return 0;
}