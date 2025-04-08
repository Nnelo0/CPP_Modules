/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:25:53 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/08 08:59:46 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_accountIndex = getNbAccounts();
	_nbAccounts += 1;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;	
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;	
	return ;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts << ";total:" << _totalAmount 
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
    std::tm timeinfo = *std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &timeinfo);
    std::cout << buffer;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";amount:" << _amount 
				<< ";deposits:" << _nbDeposits << ";withdrawals:"
				<< _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";p_amount:" << checkAmount()
				<< ";withdrawal:";
	if (checkAmount() < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout	<< withdrawal << ";amount:" << checkAmount()
					<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return true;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";p_amount:" << checkAmount();
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout	<< ";deposit:" << deposit << ";amount:" << checkAmount()
				<< ";nb_deposits:" << _nbDeposits << std::endl; 
}
