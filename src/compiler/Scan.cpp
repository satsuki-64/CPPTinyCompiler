#include "Scan.h"

namespace Compiler
{
    Scan::Scan()
    {
        line = 1;
        poolsize = 256 * 1024; // arbitrary size
    }

    Scan::~Scan()
    {

    }

    void Scan::next()
    {
        
    }

    /// @brief 从命令行获得文件名称，并读取文件
    /// @param argc 
    /// @param argv 
    /// @return 
    int Scan::ReadSrcFile(int argc, char **argv)
    {
        argc--;
        argv++;
        
        codeSrcFile.open(*argv,ios::in | ios::out);

        if(!codeSrcFile)
        {
            cout<<"打开"<< *argv <<"代码文件失败！"<<endl;
        }
        else
        {
            cout<<"成功打开"<< *argv <<"代码文件！"<<endl;
        }

        codeSrcFile.read(src,SRCSIZE*sizeof(char));

        cout << "Src当前长度为：" << strlen(src) <<endl;

        for(int i = 0;i< strlen(src);i++)
        {
            cout << src[i];
        }

        codeSrcFile.close();
        return 0;
    }
}

