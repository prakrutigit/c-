/*A university managing academic data for its students. The administration seeks to digitize the records
of student performance, including personal and academic details. The system must store each
student's roll number, name, and marks in three subjects. Additionally, it should provide
functionalities to calculate and display the average marks for performance analysis.
The institution's IT team proposed a solution where student records could be initialized in two ways:
either with default values for testing purposes or by accepting specific input details for each student.
Once initialized, the system would allow for viewing comprehensive student details, including their
roll number, name, marks, and calculated average. This functionality was designed to help faculty and
administrators track individual student performance efficiently.
To simulate real-world usage, the team decided to create multiple student records. They planned to
populate the system with a mix of students initialized using both default and specific values. The
system's ability to accurately calculate averages and display detailed student information was to be
tested with this data.*/
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    int rollno;
    string name;
    int mark[3];
    float average;

public:
    student(int r,string n,int m1,int m2,int m3)
    {
      rollno=r;
      name=n;
      mark[0]=m1;
      mark[1]=m2;
      mark[2]=m3;
clacluteaverage();
    }
    void clacluteaverage(){
    average=((mark[0]+mark[1]+mark[2])/3.0);

             }
             void display()
             {

                 cout<<"your rollnum:"<<rollno<<endl;
                 cout<<"your name:"<<name<<endl;
                 cout<<"marks:"<<mark[0]<<","<< mark[1]<< ","<< mark[2]<<endl;
                 cout<<"average"<<average<<endl;
             }


             };


    int main(){


    student bb(1,"prakruti",95,89,90);
    student cc(2,"shaswat",90,98,97);



    bb.display();
    cc.display();


    return 0;



    }
