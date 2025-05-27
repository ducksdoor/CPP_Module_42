#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
        : _accountIndex(_nbAccounts), _amount(initial_deposit)
{
    _nbAccounts++;
    _totalAmount += _amount;
    _nbWithdrawals = 0;
    _nbDeposits = 0;

    _displayTimestamp();
	std::cout << "index:"  << BLUE << _accountIndex << RESET;
    std::cout << ";amount:" << BLUE << _amount << RESET;
    std::cout << ";created"<< std::endl;


}
Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:"  << BLUE << _accountIndex << RESET;
    std::cout << ";amount:" << BLUE << _amount << RESET;
	std::cout << ";closed"<< std::endl;

}
void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    std::cout << "index:" << BLUE << _accountIndex << RESET;
    std::cout << ";p_amount:"<< BLUE << _amount << RESET;
    std::cout << ";deposit:"<< BLUE << deposit << RESET;
    _amount =  _amount + deposit;
    std::cout << ";p_amount:" << BLUE << _amount << RESET;
    std::cout << ";nb_deposits:" << BLUE << _nbDeposits << RESET << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET;
    std::cout << ";p_amount:"<< BLUE << _amount << RESET;
	if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
		return (false);
    }
    _totalNbWithdrawals ++;
    _nbWithdrawals++;
    std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
    _amount =  _amount - withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";_amount:" << BLUE << _amount << RESET;
    std::cout << ";nb_withdrawals:" << BLUE << _nbWithdrawals << RESET << std::endl;
    return(true);
}

int		Account::checkAmount( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET;
    std::cout << ";amount:" << BLUE << _amount << RESET;
    std::cout  <<";deposits:" << BLUE << _nbDeposits << RESET;
    std::cout << ";withdrawals:" << BLUE << _nbWithdrawals << RESET << std::endl;
    return(1);
}


void	Account::displayStatus( void ) const
{
    checkAmount();
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << BLUE << getNbAccounts() << RESET;
    std::cout << ";total:" << BLUE << getTotalAmount() << RESET;
    std::cout << ";deposits:" << BLUE << getNbDeposits() << RESET;
    std::cout << ";withdrawals:" << BLUE << getNbWithdrawals() << RESET << std::endl;
}


void	Account::_displayTimestamp( void )
{
    //std::cout << "[19920104_091532]";
    //u can use "real" time or "no real" time 
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[20];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer << " ";
}