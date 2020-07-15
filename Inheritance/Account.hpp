#ifndef Account_hpp
#define Account_hpp
#include <string>

class Account{
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
    void setName(std::string name);
    std::string getName();
    
protected:
    double balance;
    std::string name;
    
private:
    bool account_status; //set to True if the account is active
    
};

#endif /* Account_hpp */
