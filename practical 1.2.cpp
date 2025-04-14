/*A small retail store is facing challenges in managing its inventory effectively. The store sells a
variety of products, each identified by a unique product ID, a name, the available quantity in
stock, and the price per unit. To streamline their operations, the store needs a basic system to
manage this inventory efficiently.
The system must provide the ability to add new products to the inventory, ensuring that each
product has its ID, name, quantity, and price properly recorded. Additionally, the system should      //this program is doing with class and struture also
allow the store staff to update the quantity of any existing product, such as when new stock
arrives or when items are sold.
Another essential feature of the system is the calculation of the total value of all products in
the inventory, which is determined by multiplying the quantity of each product by its price and
summing these values for all products.*/
#include<iostream>
#include<string>
using namespace std;                                //add product/update product/display the product
class product{
private:
int id;
string name;
int quantity;
double prise;

    public:
        void add_product(){
    cout<<"enter your id";
    cin>>id;
    cout<<"enter product name";
    cin>>name;
    cout<<"no of quantity";
    cin>>quantity;
    cout<<"enter product prise";
    cin>>prise;
        }
        void update_product()
        {
  int q;
  char choice;
  double ID;
  cout<<"enter the id in order to update you quantity";
  cin>>ID;
  if(id=ID){
    cout<<"enter - in order to remove the quantity of the product";
    cout<<"enter + in order to add the quantity of the product";
    cout<<"enter your choise";
    cin>>choice;

    switch(choice){

case'+':
    {
        cout<<"enter the quantity";
        cin>>q;
        quantity= q+ quantity;
        break;

    }
case'-':
    {
        cout<<"enter your quantity";
        cin>>q;
        quantity=q-quantity;
        break;
    }
    }

  }
  else{
        cout<<"id is not found";

  }
        }
  void display_product()
  {
     int total_prise;
     total_prise=prise*quantity;
     cout<<"\n the ID:"<<id;
     cout<<"\n product name"<<name;
     cout<<"\n the quantity"<<quantity;
     cout<<"\n the prise"<<prise;
     cout<<"\n the total prise"<<total_prise;


  }




};
int main()
{
    product aa;
    aa.add_product();
     aa. display_product();
    aa. update_product();
       aa. display_product();

   return 0;
}

















