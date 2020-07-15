#include <iostream>
#include "Account.hpp"
#include "SavingsAccount.hpp"

using namespace std;

int main(){
    
    //Using the Account class
    cout << "\n===Account======================================" << endl;
    Account acc{};
    acc.deposit(2000.00);
    acc.withdraw(500.00);
    cout << endl;
    
    Account *acc_ptr;
    acc_ptr = new Account();
    acc_ptr->deposit(1000.00);
    acc_ptr->withdraw(300.00);
    delete acc_ptr;
    
    //Using the Savings Account class
    cout << "\n===Savings Account==============================" << endl;
    SavingsAccount savings;
    savings.deposit(5000.00);
    savings.withdraw(2500.00);
    cout << endl;
    
    SavingsAccount *ptr_savings;
    ptr_savings = new SavingsAccount();
    ptr_savings->deposit(7800.00);
    ptr_savings->withdraw(2300.00);
    delete ptr_savings;
    
    cout << "\n================================================" << endl;
    
    return 0;
}
