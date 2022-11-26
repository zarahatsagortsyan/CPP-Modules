#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iostream>

int main(void)
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "\nThis program is your PhoneBook" << std::endl;
    std::cout << "It accepts 3 commands: ADD, SEARCH, EXIT" << std::endl;
    std::cout << std::endl;

    while (true)
    {
        std::cout << "\nPlace for your command: ";
        std::cin >> command;

        if (command == "ADD")
        {
            phoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContact();
        }
        else if (command == "EXIT")
            exit(0);
    }

    return 0;
}