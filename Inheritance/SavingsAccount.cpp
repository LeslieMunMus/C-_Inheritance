#include "SavingsAccount.hpp"
#include <iostream>

SavingsAccount::SavingsAccount()
: interest_rate(0.03){
}

SavingsAccount::~SavingsAccount(){
}

void SavingsAccount::deposit(double amount){
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount){
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}

void SavingsAccount::setRate(double interest_rate){
    this->interest_rate = interest_rate;
}

double SavingsAccount::getRate() const{
    return interest_rate;
}

double SavingsAccount::calcNewBalance(double deposit, double withdraw){
    balance = (deposit - withdraw) * interest_rate;
    return balance;
}
