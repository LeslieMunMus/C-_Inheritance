#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.hpp"

class SavingsAccount: public Account{
public:
    SavingsAccount();
    ~SavingsAccount();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* _SAVINGSACCOUNT_H_ */
