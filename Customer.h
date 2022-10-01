#ifndef CUSTOMER_H
#define CUSTOMER_H


class Customer
{
    public:
        Customer();
        double checkBalance();
        double deposit();
        double withdraw();


    private:
        int name;
        double balance;

};

#endif // CUSTOMER_H
