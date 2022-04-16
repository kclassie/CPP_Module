#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout 	<< "index:"
				 << _accountIndex
				 << ";amount:"
				 << _amount
				 << ";created\n";
	_nbAccounts++;
	_totalAmount += _amount;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout 	<< "index:"
				<< this->_accountIndex
				<< ";p_amount"
				<< this->_amount;
	this->_nbDeposits += 1;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits += 1;
	std::cout	<< ";deposit:"
				<< deposit
				<< ";amount:"
				<< this->_amount
				<< ";nb_deposits:"
				<< this->_nbDeposits
				<< '\n';
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout 	<< "index:"
				<< this->_accountIndex
				<< ";p_amount"
				<< this->_amount;
	this->_nbWithdrawals += 1;
	if (this->_amount < withdrawal)
	{
		std::cout	<< ";withdrawal:refused\n";
		return (false);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals += 1;
	std::cout	<< ";withdrawal:"
				<< withdrawal
				<< ";amount:"
				<< this->_amount
				<< ";nb_withdravals:"
				<< this->_nbWithdrawals
				<< '\n';
	return (true);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout 	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";deposits:"
				<< this->_nbDeposits
				<< ";withdrawals:"
				<< this->_nbWithdrawals
				<< '\n';
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< " accounts:"
				<<  _nbAccounts
				<< ";total:"
				<< _totalAmount
				<< ";deposits:"
				<< _totalNbDeposits
				<< ";withdrawals:"
				<< _totalNbWithdrawals
				<< '\n';
}

void	Account::_displayTimestamp( void )
{
	std::time_t tt = std::chrono::system_clock::to_time_t (std::chrono::system_clock::now());

	struct std::tm * ptm = std::localtime(&tt);
	std::cout << '[' << std::put_time(ptm,"%G%m%e_%H%M%S") << ']';
}

Account::~Account(void)
{
	this->_nbAccounts--;
	this->_totalAmount -= this->_amount;
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;
	Account::_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<<	";closed\n";
}
