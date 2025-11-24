#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__


#include <iostream>
#include <string>



// a completer car il manque des fonction a la forme canonique hortodoxe ou jsp quoi

class ClapTrap
{
private:

    std::string name;
    int hitPoint = 10;
    int energyPoint = 10;
    int attackDamage = 0;

public:
    ClapTrap();
    ClapTrap(std::string name);
  //ClapTrap(const Claptrap& other)
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // operator=()
    ~ClapTrap();
};

// etc... 
// a verifier se qu'il manque





#endif
