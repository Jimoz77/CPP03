#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
    ScavTrap(/* args */);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);

    ScavTrap& operator=(const ScavTrap& other);
    void guardGate();
    void attack(const std::string&target);
    ~ScavTrap();
};

#endif