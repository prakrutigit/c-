/*2.3
In a growing city, a newly established bank sought to streamline its operations by implementing a
digital system to manage customer accounts. The management envisioned a system where each
account would store details about the account holder, their unique account number, and the current
balance. To ensure flexibility and accuracy, they required functionalities for creating accounts with
varying initial balances, depositing money, withdrawing funds (with checks for sufficient balance), and
generating detailed account summaries.
The bank's IT team faced the challenge of developing a robust solution. They began by sketching out
the essential features of the system. The team highlighted that new accounts could be created in two
ways: one with no initial balance, and another with specified account details and a starting amount.
Additionally, they recognized the need for reliable mechanisms to handle deposits and withdrawals,
ensuring proper validation to prevent overdrafts. Displaying account details in a clear format was also
prioritized for customer communication.
To ensure scalability, the team decided to simulate the system by creating multiple accounts using the
proposed methods. They tested various scenarios, such as depositing and withdrawing different
amounts, handling edge cases like insufficient funds, and verifying that the account summaries were
accurate. This iterative approach helped them refine the system and ensure its readiness for
deployment.*/
#include<iostream>

using namespace std;
class bank
{
    string account_holder;
    int account_number;
    double balance;

public:
   bank()
   {
     account_holder="unknown";
      account_number=0;
      balance=0;
   }

   bank (string holder,int number,double bal) {

   account_holder= holder;
   account_number= number;
   balance=bal;
   }

   void deposite(double amount){

   balance+=amount;
   }
   void withdraw(double amount){
   balance-=amount;
   }

   void display(){
      cout << "Account_holder " << account_holder << ", Name: " << account_number
             << " Balance: " << balance << endl;
   }
};
int main(){

bankaccount aa();

bankaccount a1(101, "Shaswat", 1000);
bankaccount a2(102, "Prakruti", 500);


  a1.display();
  a2.display();

return 0;

}


