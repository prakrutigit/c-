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
#include<string>
using namespace std;

class bankaccount{
private:
    string account_holder_name;
    string account_number;
    double account_balance;

public:
      //construter name = class name

bankaccount(string name,string accnumber,double accbalance)
{
    account_holder_name=name;
    account_number=accnumber;
    account_balance=accbalance;
}

    //for get the data se bhi yhaa kam chal skta tha

//deposite function
void deposite(double amount)
{
    if (amount>0){
     account_balance+=amount;
     cout<<"money is deposite"<<account_balance;
    }
    else
    {

    cout<<"money is not deposite";
    }
}
//widrow function
void widrow(double ammount)
{
    if(ammount>0&&ammount<=account_balance){
        account_balance-=ammount;
        cout<<"money is withdraw succesfully!"<<account_balance;

    }
    else{
        cout<<"money is not withdraw succesflly";
    }
}
//display the ammount
void display()
const{
cout<<"account holder"<<account_holder_name<<endl;
cout<<"account number"<<account_number<<endl;
cout<<"account balance"<<account_balance<<endl;

}
};
int main()
{
     bankaccount account("prakruti", "123456789", 1000); //yha pe account name ka object banaya hai

     account.deposite(500);
     account.widrow(300);
     account.display();
     return 0;
}
