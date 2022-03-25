#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

/*
 * 	Public functions.
 */

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
	this->_accountIndex = getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account ( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
}

/*
 * 	Private functions.
 */

void	Account::makeDeposit( int deposit ) {
	int	p_amount = this->_amount;
	int	amount	= this->_amount + deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	this->_amount = amount;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << ";";
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int	p_amount = this->_amount;
	int	amount	= this->_amount - withdrawal;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	if (amount < 0) {
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}

	this->_amount = amount;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;

	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount > 0);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(NULL);
	std::tm tm = *std::localtime(&t);
	std::cout << std::setfill('0') << "[" << (tm.tm_year + 1900)
			<< std::setw(2) << tm.tm_mon
			<< std::setw(2) << tm.tm_mday << "_"
			<< std::setw(2) << tm.tm_hour
			<< std::setw(2) << tm.tm_min
			<< std::setw(2) << tm.tm_sec << "] ";
}

Account::Account( void ) {
	this->_amount = 0;
	this->_accountIndex = getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}
