#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// ATTENTION CLASS CLAPTRAP PAS FINI DANS TOUT LES EXERCICES
//IL MANQUE CLAPTRAP OPERATOR=(CLAPTRAP& OTHER); et surrement d autre ...
int main()
{
    /* ClapTrap unknown;  // Fixed: removed parentheses
    ClapTrap joey("Joey");

    joey.attack("unknown");
    unknown.takeDamage(5);
    joey.attack("unknown");
    unknown.takeDamage(5);
    unknown.attack("Joey");
    unknown.beRepaired(5);
    unknown.attack("Joey"); */

  
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Bob");
    clap.attack("target1");
    
    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("Alice");
    
    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    scav.attack("enemy");      // Attaque modifiée
    scav.takeDamage(30);       // Fonction héritée
    scav.beRepaired(20);       // Fonction héritée
    scav.guardGate();          // Fonction unique
    
    std::cout << "\n=== Destruction (automatic) ===" << std::endl;
    return 0;
}
