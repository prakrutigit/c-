/* A growing organization sought to enhance its payroll process to improve accuracy and efficiency in
calculating employee salaries. The goal was to manage details such as the employee's name, basic
salary, and bonus amount. While most employees would receive a default bonus, there was a need
for flexibility to provide customized bonuses for exceptional performers or those in specialized roles.
To ensure real-time computation of each employee's total salary, the system would dynamically
calculate the total salary by adding the basic salary and the bonus. An inline function was chosen for
this task, allowing the system to compute the total salary instantly during processing. The system was
designed to initialize employee records using a constructor, where the bonus could either be set to a
default value or adjusted according to specific employee criteria.
As the organization expanded, managing employee records efficiently became a key consideration.
The solution involved storing employee details dynamically, ensuring the system could handle a
growing number of records while maintaining scalability and flexibility. Each employee record would
include their personal details, basic salary, and bonus information, with the system displaying a
breakdown of each employee’s details along with their total salary. */

#include <iostream>
using namespace std;

class Employee {
    string name;
    float basic, bonus;

public:

    Employee(string n, float b, float bon = 1000) {
        name = n;
        basic = b;
        bonus = bon;
    }


    inline float totalSalary() {
        return basic + bonus;
    }

    void display() {
        cout << "Name: " << name
             << ", Basic: " << basic
             << ", Bonus: " << bonus
             << ", Total Salary: " << totalSalary() << endl;
    }
};

int main() {
    Employee e1("Alice", 30000);
    Employee e2("Bob", 40000, 3000);
    Employee e3("Charlie", 35000, 2000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
