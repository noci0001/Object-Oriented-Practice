//
// Created by Samuel Nocita on 8/29/23.
//

#include "./Harl.hpp"

Harl::Harl() {
    std::cout << BLUE "Harl initialised." RESET << std::endl;
}

Harl::~Harl() {
    std::cout << BLUE "Harl deleted." RESET << std::endl;
}

void Harl::_debug( void ) {
    std::cout << GREEN "Debug: I love having extra bacon for " <<
              "my 7XL-double-cheese-triple-pickle-special-ketchup burger. " <<
              "I really do!" RESET << std::endl;
}
void Harl::_info( void ) {
    std::cout << YELLOW "Info: I cannot believe adding extra bacon costs more money. " <<
              "You didn't put enough bacon in my burger! If you did, I wouldn't be asking" <<
              " for more!" RESET << std::endl;
}
void Harl::_warning( void ) {
    std::cout << RED "Warning: I think I deserve to have some extra bacon for free. I've" <<
              " been coming for years whereas you started working here since last month." <<
              RESET << std::endl;
}

void Harl::_error( void ) {
    std::cout << PURPLE "Error: This is unacceptable! I want to speak to the " <<
              "manager now." RESET << std::endl;
}

void Harl::complain( std::string level) {
    void (Harl::*func_ptr_arr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    std::string complain_arr[4] = {"debug", "info", "warning", "error"};

    for(int i = 0; i < 4; i++) {
        if (level == complain_arr[i]) {
            (this->*func_ptr_arr[i])();
            return;
        }
    }

    std::cout << "Invalid level " << level << std::endl;
}