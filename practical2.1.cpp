/*2.1
A local construction company frequently deals with rectangular plots and structures of varying
dimensions. To streamline their planning and estimation processes, the company requires a simple
system to manage and analyze rectangular shapes efficiently.
The system must be able to handle multiple rectangles, each with distinct dimensions. For each
rectangle, the length and width need to be defined and stored securely. Additionally, the company
needs the ability to calculate two key metrics for any given rectangle:
The area, to estimate usable space or material coverage. The perimeter, to estimate boundary lengths
or material requirements for edges. To make this system functional, there should be a way to define
or update the dimensions of any rectangle as required. The system should be capable of creating and
managing multiple rectangle records, performing calculations for each, and displaying the results
clearly for analysis and planning purposes.*/
#include<iostream>
using namespace std;

class rectangle
{
  private:
    int lenght;
    int width;
    int area;
    int perimeter;
  public:
   rectangle(int l,int w)
   {
       lenght=l;
       width=w;
       area=0;
       perimeter=0;

   }
   void calculatearea(){

       area=lenght*width;

   }
   void calculateperimeter(){

   perimeter=(2*(lenght+width));

   }

   void display(){
       cout<<"\n your area"<<area<<endl;
       cout<<"\n your perimeter"<<perimeter<<endl;


   }
};
   int main()
   {
       rectangle aa(10,5);
       rectangle bb(20,30);
       aa.calculatearea();
       aa.calculateperimeter();
       aa.display();
       bb.calculatearea();
       bb.calculateperimeter();
      bb.display();
      return 0;

   }

