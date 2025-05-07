/*A bank wants to create a simple system to manage customer bank accounts. The system should
allow customers to perform basic banking operations such as depositing money, withdrawing
money, and checking their account balance.
Each bank account will need to have an account holder's name, a unique account number, and
a balance. Deposits should increase the account balance, while withdrawals should only be
allowed if there are sufficient funds in the account. If an attempt is made to withdraw more
money than is available, an error message should be displayed. Customers should also have the
ability to view their account balance whenever required.
The system must be designed using Object-Oriented Programming principles, focusing on
creating a simple and efficient solution to manage the accounts effectively. The system should
ensure that all account details are secure and accessible only through authorized methods.*/

#include<iostream>
using namespace std;
class bankaccount
{
    char name[15];
    double acc_num;
    double balance=0;

public:
    void getdata();
    void putdata();
    void deposit();
    void withdraw();
    void display_balance();
};

void bankaccount::getdata()
{
    cout<<"\n Enter your name: ";
    cin>>name;
    cout<<"\n Enter your account number: ";
    cin>>acc_num;
    cout<<"\n Enter your initial balance:";
    cin>>balance;
}

void bankaccount::putdata()
{
    cout<<"\n Your name is "<<name;
    cout<<"\n Your account number is "<<acc_num;
    cout<<"\n Your initial balance is "<<balance;
}

void bankaccount::deposit()
{
    int a;
    cout<<"\n Enter the amount you want to deposit: ";
    cin>>a;
    balance=balance+a;
}

void bankaccount::withdraw()
{
    int w;
    cout<<"\n Enter the amount you want to withdraw: ";
    cin>>w;
    balance=balance-w;
    if(balance<0)
    {
        cout<<"Insufficient balance in account.";
    }
}

void bankaccount::display_balance()
{
    cout<<"\n Your current balance is: "<<balance;
}

int main()
{
    bankaccount b1;
    b1.getdata();
    b1.putdata();
    b1.deposit();
    b1.withdraw();
    b1.display_balance();
    cout<<"\n prakruti pethani";
}
