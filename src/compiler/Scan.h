#pragma once

#include <iostream>

#include <fcntl.h>

#include <stdlib.h>
#include <memory.h>
#include <string.h>

#include <fstream>
#include <iostream>

#define SRCSIZE 1000

using namespace std;

namespace Compiler
{
    
    class Scan
    {
    private:
        int line;
        int poolsize;

        char src[SRCSIZE];
        char old_src[SRCSIZE];

        fstream codeSrcFile; //代码源文件
        
    public:
        Scan();
        ~Scan();

        void next();

        int ReadSrcFile(int argc, char **argv);

    };
}



