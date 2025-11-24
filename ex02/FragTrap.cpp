#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->name = "unknown";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap: " << this->name << " has been created\n";
}


FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap: " << this->name << " has been created\n";

}


FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap: " << this->name << " has been created by copy constructor\n";
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
    std::cout << "FragTrap: Assignment operator called\n";
    if(this != &other)
    {
        ClapTrap::operator=(other); // TODO
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << this->name << " said: Let's high five guys!\n"; 
}



void FragTrap::attack(const std::string& target)
{
    if(this->energyPoint > 0 && hitPoint > 0)
    {
        this->energyPoint--;
        std::cout << "FragTrap: " << this->name << " deals a critical attack to " << target << ", causing " << this->attackDamage << " points of damage!\n";
    }
    if(this->energyPoint <= 0)
        std::cout << "FragTrap: " << this->name << " don't have enought energy points to attack.\n";
    if(this->hitPoint <= 0)
        std::cout << "FragTrap: " << this->name << " need to be repaired before attacking.\n";
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << this->name << " has been destroyed\n";
}