#include "Harl.hpp"
#include <iostream>

void	Harl::complain( std::string level ) {
	int	i;
	std::string threatLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++) {
		if (level == threatLevels[i])
			break ;
	}
	switch (i) {
		case 0 :
			this->debug();
		case 1 :
			this->info();
		case 2 :
			this->warning();
		case 3 :
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant stuff ]";
			std::cout << std::endl;
			break ;
	}
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I loooove having extra bacon for my 9XXL-double-cheese-" \
	<< "triple-gun-special-ketchup burger. I really do !\n";
	std::cout << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I CANNOT believe adding extra bacon costs more money. " \
	<< "YOU didn't put enough bacon in my burger ! " \
	<< "If you did, I wouldn't be asking for more\n";
	std::cout << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I DESERVE to have some extra bacon for free. " \
	<< "I've been coming for years wheras you started working here since " \
	<< "last month\n";
	std::cout << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is UNACCEPTABLE! I want to speak to your manager now.\n";
	std::cout << std::endl;
}
