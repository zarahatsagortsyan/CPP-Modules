#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;

    public:

        void setFirstName(std::string first_name);
        std::string getFirstName() const;
        
        void setLastName(std::string last_name);
        std::string getLastName(void) const;

        void setNickName(std::string nick_name);
        std::string getNickName(void) const;

        void setPhoneNumber(std::string phone_number);
        std::string getPhoneNumber(void) const;

        void setDarkestSecret(std::string darkest_secret);
        std::string getDarkestSecret(void) const;
};

#endif