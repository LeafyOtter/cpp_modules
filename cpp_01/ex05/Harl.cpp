#include "Harl.hpp"
#include <iostream>

void	Harl::complain( std::string level ) {
	std::string threatLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::* threats[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (level == threatLevels[i]) {
			(this->*(threats[i]))();
			break ;
		}
	}
}

void	Harl::debug( void ) {
	std::cout << "I loooove having extra bacon for my 9XXL-double-cheese-" \
	<< "triple-gun-special-ketchup burger. I really do !" << std::endl;
}
void	Harl::info( void ) {
	std::cout << "I CANNOT believe adding extra bacon costs more money. " \
	<< "YOU didn't put enough bacon in my burger ! " \
	<< "If you did, I wouldn't be asking for more"  << std::endl;
}
void	Harl::warning( void ) {
	std::cout << "I think I DESERVE to have some extra bacon for free. " \
	<< "I've been coming for years wheras you started working here since " \
	<< "last month" << std::endl;
}
void	Harl::error( void ) {
	std::cout << "This is UNACCEPTABLE! I want to speak to your manager now." \
	<< std::endl;
}