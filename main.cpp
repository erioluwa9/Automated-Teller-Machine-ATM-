#include <iostream>
#include "Customer.h"
using namespace std;

void showMenu(){
    cout << "********MENU********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************** \n" << endl;
};

int main()
{

    Customer sonny;

    int option;

    // check the balance, deposit,withdraw,show menu

   do{
        showMenu();
        cout << "Please pick an option: "<< endl;
        cin >> option;
        system("cls");

        switch(option){
        case 1:
            sonny.checkBalance();
            break;
        case 2:
            sonny.deposit();
            break;
        case 3:
            sonny.withdraw();
            break;
        default:
            cout<< "Pick from the options below!!! \n" << endl;
        }
    }while(option!=4);


}
