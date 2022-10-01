#include "Customer.h"
#include <iostream>

using namespace std;



Customer::Customer()
{
    balance = 0;
}


double Customer::checkBalance(){
    cout << "Your Account Balance is " << balance << endl;
    cout << endl;
    return balance;
};

double Customer::deposit(){
    cout << "enter deposit amount:";
    double depositAmount;
    cin>>depositAmount;
    balance += depositAmount;
    cout << "Your new balance is " << balance << endl;
    cout << endl;
    return balance;
};

double Customer::withdraw(){
    cout << "enter withdraw amount:";
    double withdrawAmount;
    cin>>withdrawAmount;
    if(withdrawAmount<=balance){
        balance -= withdrawAmount;
        cout << "Your new balance is " << balance<< endl;
    }else
        cout << "Not enough money" << endl;
    cout << endl;
    return balance;
};
