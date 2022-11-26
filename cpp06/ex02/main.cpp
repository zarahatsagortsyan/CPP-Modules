#include <iostream>
#include "header.hpp"
#include "ctime"

Base *rand_generate(void)
{
    srand(time(0));

    int r_n = rand() % 3;

    Base *b = NULL;
	t_list objs[] = 
	{
		{ 0, new A },
		{ 1,  new B },
		{ 2, new C },
	};

    for (int i = 0; i < 3; i++)
	{
		if (objs[i].num == r_n)
			b = objs[i].ob;
		else
			delete objs[i].ob;
	}
	return (b);
}


void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e) {}
}


int	main()
{
	srand(time(0));
	A	a;
	B	b;
	C	c;

	std::cout << "identify1" << std::endl;
	identify(&a);
	identify(&b);
	identify(&c);

	std::cout << std::endl;
	std::cout << "identify2" << std::endl;
	identify(a);
	identify(b);
	identify(c);

	std::cout << std::endl << "Random generated: " << std::endl;

	Base	*ptr = rand_generate();

	std::cout << "identity(ptr): ";
	identify(ptr);
	std::cout << "identity(*ptr): ";
	identify(*ptr);


}