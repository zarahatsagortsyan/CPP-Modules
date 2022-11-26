#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include "header.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    index = 0;
    return;
}

std::string req_input(std::string field)
{
    std::string field_val;
    std::cin >> field_val;

    if (field != "phone_number")
    {
        while (!check_Naming(field_val))
        {
            std::cin.clear();
            std::cerr <<  "Invalid symbols in input!" << std::endl;
            std::cout << field << ": "; 
            std::cin >> field_val;
        } 
    }
    else
    {
        while (!check_number(field_val))
        {
            std::cin.clear();
            std::cerr <<  "Invalid symbols in input!" << std::endl;
            std::cout << field << ": "; 
            std::cin >> field_val;
        } 
    }

    return field_val;
}

void PhoneBook::addContact(void)
{
    int index;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    index = this->index;
    std::cout << "ID " << (index + 1) << ":" << std::endl;
    
    std::cout<< "first_name: "; 
    first_name = req_input("first_name");
        
    std::cout<< "last_name: "; 
    last_name = req_input("last_name");

    std::cout<< "nick_name: "; 
    std::cin>> nick_name;
    
    std::cout<< "phone_number: "; 
    phone_number = req_input("phone_number");

    std::cout<< "darkest_secret: "; 
    std::cin>> darkest_secret;

    this->contacts[index].setFirstName(first_name);
    this->contacts[index].setLastName(last_name);
    this->contacts[index].setNickName(nick_name);
    this->contacts[index].setPhoneNumber(phone_number);
    this->contacts[index].setDarkestSecret(darkest_secret);

    this->index = (index + 1) % 8;
    if(this->count < 8)
        this->count++;
    std::cout<<"\n";
}

void PhoneBook::searchContact()
{
    unsigned int ID;

    for (size_t i = 0; i < this->count; i++)
    {
        print_contact(i,  this->contacts[i].getFirstName(), 
                            this->contacts[i].getLastName(),
                            this->contacts[i].getNickName());
    }

    std::cout<<"\nIndex: ";
    std::cin>>ID;

    if (std::cin.good())
    {
        if (ID <= this->count && ID > 0)
        {
            std::cout<<"first name: " << this->contacts[ID-1].getFirstName() << std::endl;
            std::cout<<"last name: " << this->contacts[ID-1].getLastName() << std::endl;
            std::cout<<"nick name: " << this->contacts[ID-1].getNickName() << std::endl;
            std::cout<<"phone: " << this->contacts[ID-1].getPhoneNumber() << std::endl;
            std::cout<<"darkest secret: " << this->contacts[ID-1].getDarkestSecret() << std::endl;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
        }
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
    }
        std::cin.clear();   
}