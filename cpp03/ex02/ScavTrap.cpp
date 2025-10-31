#include "ScavTrap.hpp"




ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap: " << this->name << " has been created.\n";

}

ScavTrap::ScavTrap(/* args */) : ClapTrap("Unknown")
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap: " << this->name << " has been created.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Scavtrap: Copy constructor created: " << this->name << "\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap: Assignment operator called\n";
    if(this != &other)
    {
        ClapTrap::operator=(other); // TODO
    }
    return *this;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << this->name << " is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energyPoint > 0 && hitPoint > 0)
    {
        this->energyPoint--;
        std::cout << "ScavTrap: " << this->name << " deals a critical attack to " << target << ", causing " << this->attackDamage << " points of damage!\n";
    }
    if(this->energyPoint <= 0)
        std::cout << "ScavTrap: " << this->name << " don't have enought energy points to attack.\n";
    if(this->hitPoint <= 0)
        std::cout << "ScavTrap: " << this->name << " need to be repaired before attacking.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: " << this->name << " has been destroyed.\n";
}