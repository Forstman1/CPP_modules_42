/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:49:27 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/19 23:13:00 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbDeposits = 0;
    _nbAccounts++;
    _nbWithdrawals = 0;
}

void       Account::_displayTimestamp(void)
{
	char	ptr[80];
    time_t tim = std::time(NULL);
    tm *gottime = localtime(&tim);

    strftime(ptr, 80, "%y", gottime);
	std::cout << "[" << ptr;
	strftime(ptr, 80, "%m", gottime);
	std::cout << ptr;
    strftime(ptr, 80, "%d", gottime);
    std::cout << ptr << "_";
	strftime(ptr, 80, "%H", gottime);
	std::cout << ptr;
	strftime(ptr, 80, "%M", gottime);
	std::cout << ptr;
    strftime(ptr, 80, "%S", gottime);
    std::cout << ptr << "] ";
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal <<  ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        return (true);
    }
}

void	Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit <<  ";nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
    _amount += deposit;
    _totalNbDeposits++;
}

int		Account::checkAmount(void) const
{
    return (_amount);
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::t::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

int	Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}


int Account::getTotalAmount(void)
{
    return (_totalAmount);
}


void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;

}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}