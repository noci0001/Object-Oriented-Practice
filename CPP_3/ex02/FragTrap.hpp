//
// Created by Samuel Nocita on 9/27/23.
//
#include <iostream>
#include "ClapTrap.hpp"

#ifndef C_PLUS_PLUS_FRAGTRAP_HPP
#define C_PLUS_PLUS_FRAGTRAP_HPP

//ScavTrap will inherit the public members of the Claptrap class
class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& original);
        FragTrap&	operator=(const FragTrap& original);
        ~FragTrap();
        void	guardGate(void);
        void	attack( const std::string& target );
        void highFivesGuys(void);
};

#endif
