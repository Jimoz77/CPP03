#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__


#include <iostream>
#include <string>


class ClapTrap
{
protected:

    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
  	ClapTrap(const ClapTrap& other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	
	ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();
};






#endif
