#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include "Contact.hpp"


class PhoneBook
{
    public:
        Contact contacts[8];
        int             index;
        unsigned int    count;
        void addContact();
        void searchContact();

        PhoneBook(void);
};

#endif