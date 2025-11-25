#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    this->name = "noname Badass";
    this->energyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
    std::cout << "Claptrap named: " << this->name << " has been created\n";
}

ClapTrap::ClapTrap( std::string name)
{
    this->name = name;
    this->energyPoint = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
    std::cout << "Claptrap named: " << this->name << " has been created\n";
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energyPoint > 0 && hitPoint > 0)
    {
        this->energyPoint--;
        std::cout << "ClapTrap: " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
    }
    if(this->energyPoint <= 0)
        std::cout << "ClapTrap: " << this->name << " don't have enought energy points to attack.\n";
    if(this->hitPoint <= 0)
        std::cout << "ClapTrap: " << this->name << " need to be repaired before attacking.\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoint = this->hitPoint - amount;
    std::cout << this->name << " lost " << amount << "PV and is now at " << this->hitPoint << "PV\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoint = this->hitPoint + amount;
    std::cout << this->name << " repaired it self for " << amount << "PV and is now at " << this->hitPoint << "PV\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap: " << this->name << " has been destroyed\n";
}