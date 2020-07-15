#include <iostream>
#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount(){
}

SavingsAccount::~SavingsAccount(){
}

void SavingsAccount::deposit(double amount){
    std::cout << "Account deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
}
