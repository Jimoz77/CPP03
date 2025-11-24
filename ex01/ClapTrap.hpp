#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__


#include <iostream>
#include <string>

class ClapTrap
{
protected:

    std::string name;
    int hitPoint = 10;
    int energyPoint = 10;
    int attackDamage = 0;

public:
    ClapTrap();
    ClapTrap(std::string name);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ~ClapTrap();
};






#endif