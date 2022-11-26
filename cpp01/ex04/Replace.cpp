#include "Replace.hpp"
#include <iostream>
#include <fstream>

Replace::Replace(std::string _filename, std::string _s1, std::string _s2)
{
    filename = _filename;
    s1 = _s1;
    s2 = _s2;
}

std::string Replace::overwrite(std::string line)
{
    size_t index = 0;
     while(line.find(s1, 0) != std::string::npos)
    {
        index = line.find(s1, 0);
        line.erase(index, s1.length());
        line.insert(index, s2);
    }
    return line;
}

void Replace::ReplaceS1withS2()
{
    std::ifstream in_file;
    std::ofstream out_file;
    std::string line;

    in_file.open(filename);

    if (!in_file.is_open())
    {
        std::cout << "File coun't be opened!" << std::endl;
        exit(0);
    }  

	in_file.seekg(0, std::ios::end);
	if (in_file.tellg() <= 0)
	{
		std::cout << "File is empty!!" << std::endl;
		exit(0);
	}
	in_file.seekg(0, std::ios::beg);

    if(s1.length() > 0)
    {
        out_file.open(filename + ".replace");
        if(!out_file.is_open())
            std::cout << "File coun't be opened!" << std::endl;
        else
        {
            while (!in_file.eof())
            {
                getline(in_file, line);  
                out_file << overwrite(line) << std::endl;
            }
        }
    }   
    else
    {
        std::cout << "s1 is empty!" << std::endl;
        exit(0);
    }
    in_file.close();
    out_file.close();
}

Replace::~Replace()
{
}