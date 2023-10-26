//
// Created by Samuel Nocita on 9/27/23.
//
#include <iostream>
#include "ClapTrap.hpp"

#ifndef C_PLUS_PLUS_SCAVTRAP_HPP
#define C_PLUS_PLUS_SCAVTRAP_HPP

//ScavTrap will inherit the public members of the Claptrap class
class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& original);
        ScavTrap&	operator=(const ScavTrap& original);
        ~ScavTrap();
        void	guardGate(void);
        void	attack( const std::string& target );
};

#endif
