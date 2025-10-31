#include "ClapTrap.hpp"


int main()
{
    ClapTrap unknown;  // Fixed: removed parentheses
    ClapTrap joey("Joey");

    joey.attack("unknown");
    unknown.takeDamage(0);
    joey.attack("unknown");
    unknown.takeDamage(0);
    unknown.attack("Joey");
    unknown.beRepaired(0);
    unknown.attack("Joey");
}
