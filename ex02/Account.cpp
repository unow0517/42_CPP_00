/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:14:46 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/09 16:13:15 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;	
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
	:_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<<";amount:" << _amount
	<<";created" << std::endl;
}

Account::Account(void)
	:_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<<";amount:" << _amount
	<<";created" << std::endl;
}
//The order in which the destructors are called may differ depending on your compiler/operating system. So your destructors may be called in a reverse order. IN PDF
Account::~Account(void)
{
	_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<<";amount:" << _amount
	<<";closed" << std::endl;
}

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts 
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals <<std::endl;
};

void Account::makeDeposit( int deposit )
{
	_totalNbDeposits += _nbDeposits;
	_nbDeposits++;
	_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<<";p_amount:" << _amount
	<<";deposit:" << deposit
	<<";amount:" << _amount + deposit
	<<";nb_deposits:" << _nbDeposits
	<<std::endl;
	_amount += deposit;
}
bool Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout <<"index:" << _accountIndex
		<<";p_amount:" << _amount
		<<";withdrawal:refused" << std::endl;
		return (1);
	}
	else
	{
		_nbWithdrawals++;
		_amount -= withdrawal;
		_displayTimestamp();
		std::cout <<"index:" << _accountIndex
		<<";p_amount:" << _amount
		<<";withdrawal:" << withdrawal
		<<";amount:" << _amount - withdrawal
		<<";nb_withdrawals:" << _nbWithdrawals <<std::endl;
		return (0);
	}
}
int	 Account::checkAmount( void ) const
{
	return (0);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<<";amount:" << _amount
	<<";deposits:" << _nbDeposits
	<<";withdrawals:" << _nbWithdrawals
	<<std::endl;
}

void Account::_displayTimestamp( void )
{
	// Get the current time
    std::time_t now = std::time(0);
    
    // Convert it to local time
    std::tm *ltm = std::localtime(&now);
    
    // Format and output the time
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", ltm);
    std::cout << buffer;
}

