/* A regional banking institution sought to improve its loan management process by developing a system
that could efficiently handle loan details for applicants. The system was expected to streamline the
calculation of monthly EMIs (Equated Monthly Instalments) and provide detailed loan summaries for
customers. This initiative aimed to enhance customer experience by offering accurate and transparent
information about their loans.

To meet these requirements, the bank's technology team was tasked with designing a solution. They
envisioned a system where each loan would be uniquely identified by a loan ID, and additional details
such as the applicant's name, total loan amount, annual interest rate, and loan tenure in months
would be stored. The team also emphasized the importance of accurately calculating the EMI using a
standard formula based on the loan amount, interest rate, and tenure. The formula incorporated
compound interest principles to determine the fixed monthly payment for the loan term.

EMI=
P ∗ R ∗ (1 + R)^T
((1+R)^T) −1

As part of the implementation, the developers planned to initialize loans either with default values for
testing purposes or with actual customer data provided at the time of application. The system needed

to include a feature to display comprehensive loan details, including the calculated EMI, in a customer-
friendly format. This functionality was intended to aid both customers and bank staff in managing

loan-related queries effectively. */

#include <iostream>
using namespace std;

class Loan {
public:
    int loanID;
    string name;
    float amount, annualRate;
    int tenure;

    Loan(int id = 0, string n = "None", float amt = 0, float rate = 0, int t = 0) {
        loanID = id;
        name = n;
        amount = amt;
        annualRate = rate;
        tenure = t;
    }


    float power(float base, int exp) {
        float result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    float calculateEMI() {
        float R = (annualRate / 12) / 100;
        if (R == 0 || tenure == 0) return 0;
        float x = power(1 + R, tenure);
        float emi = amount * R * x / (x - 1);
        return emi;
    }

    void display() {
        cout << "Loan ID: " << loanID << ", Name: " << name << endl;
        cout << "Amount: " << amount << ", Interest Rate: " << annualRate
             << "%, Tenure: " << tenure << " months" << endl;
        cout << "EMI: " << calculateEMI() << "\n\n";
    }
};

int main() {
    Loan l1, l2(201, "Shaswat", 300000, 8.5, 48), l3(202, "Prakruti", 150000, 10.0, 24);

    l1.display();
    l2.display();
    l3.display();

    return 0;
}/* A regional banking institution sought to improve its loan management process by developing a system
that could efficiently handle loan details for applicants. The system was expected to streamline the
calculation of monthly EMIs (Equated Monthly Instalments) and provide detailed loan summaries for
customers. This initiative aimed to enhance customer experience by offering accurate and transparent
information about their loans.

To meet these requirements, the bank's technology team was tasked with designing a solution. They
envisioned a system where each loan would be uniquely identified by a loan ID, and additional details
such as the applicant's name, total loan amount, annual interest rate, and loan tenure in months
would be stored. The team also emphasized the importance of accurately calculating the EMI using a
standard formula based on the loan amount, interest rate, and tenure. The formula incorporated
compound interest principles to determine the fixed monthly payment for the loan term.

EMI=
P ∗ R ∗ (1 + R)^T
((1+R)^T) −1

As part of the implementation, the developers planned to initialize loans either with default values for
testing purposes or with actual customer data provided at the time of application. The system needed

to include a feature to display comprehensive loan details, including the calculated EMI, in a customer-
friendly format. This functionality was intended to aid both customers and bank staff in managing

loan-related queries effectively. */

#include <iostream>
using namespace std;

class Loan {
public:
    int loanID;
    string name;
    float amount, annualRate;
    int tenure;

    Loan(int id = 0, string n = "None", float amt = 0, float rate = 0, int t = 0) {
        loanID = id;
        name = n;
        amount = amt;
        annualRate = rate;
        tenure = t;
    }


    float power(float base, int exp) {
        float result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    float calculateEMI() {
        float R = (annualRate / 12) / 100;
        if (R == 0 || tenure == 0) return 0;
        float x = power(1 + R, tenure);
        float emi = amount * R * x / (x - 1);
        return emi;
    }

    void display() {
        cout << "Loan ID: " << loanID << ", Name: " << name << endl;
        cout << "Amount: " << amount << ", Interest Rate: " << annualRate
             << "%, Tenure: " << tenure << " months" << endl;
        cout << "EMI: " << calculateEMI() << "\n\n";
    }
};

int main() {
    Loan l1, l2(201, "Shaswat", 300000, 8.5, 48), l3(202, "Prakruti", 150000, 10.0, 24);

    l1.display();
    l2.display();
    l3.display();

    return 0;
}
