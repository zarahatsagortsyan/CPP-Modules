#include "Karen.hpp"
#include <iostream>

static int	level(char *argv)
{
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (argv == arr[i])
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
    int _level;
    if (argc == 2)
    {
        Karen karen;
        _level = level(argv[1]);
		switch (_level)
		{
            case 0:
                karen.complain("DEBUG");
            case 1:
                karen.complain("INFO");
            case 2:
                karen.complain("WARNING");
            case 3:
                karen.complain("ERROR");
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
                break;
        }
    }
    else
        std::cout << "Wrong number of arguments!"<<std::endl;

    return (0);
}