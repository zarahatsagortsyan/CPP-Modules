#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void setType(std::string _type);
        Weapon(std::string _type);
        Weapon();
        ~Weapon();
};

#endif