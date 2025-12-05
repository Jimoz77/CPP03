#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    this->name = "noname Badass";
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
    std::cout << "Claptrap named: " << this->name << " has been created\n";
}

ClapTrap::ClapTrap( std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Claptrap named: " << this->name << " has been created\n";
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ClapTrap copy constructor called\n";
}
void ClapTrap::attack(const std::string& target)
{
    if(this->energyPoints > 0 && hitPoints > 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap: " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
    }
    else if(this->energyPoints <= 0)
        std::cout << "ClapTrap: " << this->name << " don't have enought energy points to attack.\n";
    else if(this->hitPoints <= 0)
        std::cout << "ClapTrap: " << this->name << " need to be repaired before attacking.\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints = this->hitPoints - amount;
    std::cout << this->name << " lost " << amount << "PV and is now at " << this->hitPoints << "PV\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << this->name << " repaired it self for " << amount << "PV and is now at " << this->hitPoints << "PV\n";
	}
	else if(this->energyPoints <= 0)
		std::cout << "ClapTrap: " << this->name << "doesn't have enough energy points to repair\n";
	else if(this->hitPoints <= 0)
		std::cout << "ClapTrap: " << this->name << "is already destroyed.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if( this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap: " << this->name << " has been destroyed\n";
}