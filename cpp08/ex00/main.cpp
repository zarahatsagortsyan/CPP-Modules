#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <list>
#include <iterator>

int main()
{
    std::vector<int> myvector(3, 100);
    std::vector<int>::iterator it;
    
    int arr[] = {12, 51, 36, -52, 10};

    myvector.insert(myvector.end(), arr, arr + 5);

    std::cout << "myvector contains:";
    for (it = myvector.begin(); it < myvector.end(); it++)
        std::cout << ' ' << *it;
    std::cout << '\n';

    try
    {
        std::cout << "finding: " << *easyfind(myvector, 10) << std::endl;
        std::cout << "finding: " << *easyfind(myvector, -52) << std::endl;
        it = easyfind(myvector, 41);
        std::cout << "finding: " << &it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //list
    std::list<int> mylist;
    std::list<int>::iterator it_list;
   
    for (int i = 0; i < 10; i++)
        mylist.push_front(i * 2);
        
    std::cout << "list size: "<< mylist.size() << std::endl;

    std::cout << "mylist contains:";
    for (it_list = mylist.begin(); it_list != mylist.end(); ++it_list)
        std::cout << ' ' << *it_list;
    std::cout << std::endl;
    
    try
    {
        std::cout << "finding: " << *easyfind(mylist, 10) << std::endl;
        std::cout << "finding: " << *easyfind(mylist, -52) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}