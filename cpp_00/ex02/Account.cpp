#include "Account.hpp"

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
	;
}

Account::Account( int initial_deposit ) {
	;
}

Account::~Account ( void ) {
	;
}

/*
 * 	Private functions.
 */

void	Account::makeDeposit( int deposit ) {
	;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	;
}

int		Account::checkAmount( void ) const {
	;
}

void	Account::displayStatus( void ) const {
	;
}

void	Account::_displayTimestamp( void ) {
	;
}

Account::Account( void ) {
	;
}
