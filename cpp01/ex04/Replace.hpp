#ifndef REPLACE_H
#define REPLACE_H

#include <string>

class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;    
    public:
        Replace(std::string _filename, std::string _s1, std::string _s2);
        void ReplaceS1withS2();
        std::string overwrite(std::string line);
        ~Replace();
};

#endif