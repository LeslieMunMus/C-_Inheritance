#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
#include "Account.hpp"

class SavingsAccount: public Account{
public:
    SavingsAccount();
    ~SavingsAccount();
    void deposit(double amount);
    void withdraw(double amount);
    void setRate(double interest_rate);
    double getRate() const;
    double calcNewBalance(double deposit, double withdraw);
    
protected:
    double interest_rate;

};

#endif /* SavingsAccount_hpp */
