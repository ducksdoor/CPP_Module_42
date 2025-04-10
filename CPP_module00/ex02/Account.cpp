#include "Account.hpp"
#include <iostream>
#include <iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
    std::cout << "hola, soy getNbAccounts" << std::endl;
    return(0);
}

int	Account::getTotalAmount( void )
{
    std::cout << "hola, soy getTotalAmount" << std::endl;
    return(0);
}

int	Account::getNbDeposits( void )
{
    std::cout << "hola, soy getNbDeposits" << std::endl;
    return(0);
}

int Account::getNbWithdrawals( void )
{
    std::cout << "hola, soy getNbWithdrawal" << std::endl;
    return(0);
}
void    Account::displayAccountsInfos( void )
{

    std::cout << "Soy DAI:";
    _totalAmount = 42;
    std::cout << "amount:" << _totalAmount << std::endl;
}

Account::Account( int initial_deposit )
{
    _nbAccounts = initial_deposit;
    _totalAmount = 0;
    _totalNbDeposits = 0;
    _totalNbWithdrawals = 0;

    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}
Account::~Account( void )
{

}

void	Account::makeDeposit( int deposit )
{
    std::cout << "hola, soy makeDeposit" << std::endl;
     _totalAmount =  _totalAmount + deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    std::cout << "hola, soy makeWithdrawal" << std::endl;
    _totalNbWithdrawals = _totalNbWithdrawals + withdrawal;
    return(true);
}
int		Account::checkAmount( void ) const
{
    std::cout << "hola, soy checkAmount" << std::endl;
    return(0);
}
//la fecha esta metida a capon
void	Account::displayStatus( void ) const
{
    std::cout << "[19920104_091532]" << "index:" << _accountIndex << std::endl;
//    _accountIndex = _accountIndex + 1;
}

// void	Account::_displayTimestamp( void )
// {
//     _accountIndex = 0;
//     _amount = 0;
// }

//vindif arcivo1 archivo2