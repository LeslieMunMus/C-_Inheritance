#ifndef Account_hpp
#define Account_hpp
#include <string>

class Account{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif /* Account_hpp */
