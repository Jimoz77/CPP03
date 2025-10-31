#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__


#include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(FragTrap& other);

    FragTrap& operator=(FragTrap& other);

    void highFivesGuys(void);
    void attack(const std::string& target);
    ~FragTrap();
};


#endif