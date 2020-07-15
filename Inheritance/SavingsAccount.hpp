#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
#include "Account.hpp"

class SavingsAccount: public Account{
public:
    SavingsAccount();
    ~SavingsAccount();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* SavingsAccount_hpp */
