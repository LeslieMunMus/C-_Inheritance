#include "Account.hpp"
#include <iostream>

Account::Account()
: balance(0.0), name("Account"), account_status(true){
}

Account::~Account(){
}

void Account::deposit(double amount){
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
}

void Account::setName(std::string name){
    this->name = name;
}

std::string Account::getName(){
    return name;
}
