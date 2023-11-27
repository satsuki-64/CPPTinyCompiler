#include "Core.h"
#include "Scan.h"
using namespace Compiler;

int main(int argc,char **argv)
{
    cout << "Hello,World!" << endl;

    Scan scan;
    scan.ReadSrcFile(argc,argv);

    return 0;
}