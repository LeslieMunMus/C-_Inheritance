#include "SavingsAccount.hpp"
#include <iostream>

SavingsAccount::SavingsAccount()
: interst_rate(0.03){
}

SavingsAccount::~SavingsAccount(){
}

void SavingsAccount::deposit(double amount){
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount){
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}
