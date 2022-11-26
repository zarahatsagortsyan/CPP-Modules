#include <iostream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        Replace replaceword((std::string)argv[1],
                            (std::string)argv[2],
                            (std::string) argv[3]);
        replaceword.ReplaceS1withS2();
    }
    else
        std::cout << "wrong input number" << std::endl;
}