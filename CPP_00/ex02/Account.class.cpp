
#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.class.hpp"

// ************************************************************************** //
//                          Constructor & Destructor                          //
// ************************************************************************** //

Account::Account(void)
{

}

Account::~Account( void )
{
	Account::_nbAccounts--;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

Account::Account(int initial_deposit)
				: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;
}

// ************************************************************************** //
//                                Non members:                                //
// ************************************************************************** //

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
			<< ";total:" << Account::_totalAmount
			<< ";deposits:" << Account::_totalNbDeposits
			<< ";withdrawals:" << Account::_totalNbWithdrawals
			<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	t = time(NULL);
	tm*		timePtr = localtime(&t);

	std::cout << "["
			<< timePtr->tm_year + 1900
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_mon + 1
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_mday
			<< "_"
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_hour
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_min
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_sec
			<< "] ";
}

// ************************************************************************** //
//                                Members:                                    //
// ************************************************************************** //

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:";

	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	std::cout << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;

	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;
}
