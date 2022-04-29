#include <iostream>
#include <string> 

using namespace std;

int main() {
    int empNumber, salary, manSalary, nonManSalary, monthHours, numToys;
    char empCode, empCat;
    string empName;

    manSalary = 70000;
    nonManSalary = 2800;

    cout << "WELCOME TO SALARY COUNTER" << endl;
    cout << "=========================" << endl;
    cout << "Enter Your Name : ";
    cin >> empName;
    cout << "Enter Your Employee Number : ";
    cin >> empNumber;
    cout << "(G) for Fixed Paid Employees" << endl;
    cout << "(K) for Contract Workers" << endl;
    cout << "(S) for Subcontract Workers" << endl;
    cout << "Enter Your Type of Job : ";
    cin >> empCode;

    while(empCode == 'G' || empCode == 'K' || empCode == 'S') {
        if(empCode == 'G') {
            cout << "(P) for Manager" << endl;
            cout << "(B) for Non-Manager" << endl;
            cout << "Enter Your Category : ";
            cin >> empCat;
            if(empCat == 'P') {
                salary = manSalary;
            }
            if(empCat == 'B') {
                do {
                    cout << "Enter Your Overtime Hours per Month : ";
                    cin >> monthHours;
                    if(monthHours >= 1 && monthHours <= 10) {
                        salary = nonManSalary +  monthHours * 15;
                    }
                    else if(monthHours > 10 && monthHours <= 20) {
                        salary = 10 * 15 + (monthHours % 10) * 12 + nonManSalary;
                    }
                    else {
                        cout << "claim overtime payment rejected, please input again" << endl;
                    }  
                } while(monthHours < 1 && monthHours > 20);    
            }
        }
        if(empCode == 'K') {
            do {
                cout << "(B) for Recovery" << endl;
                cout << "(S) for Maintenance" << endl;
                cout << "Enter Your Category : ";
                cin >> empCat;
                cout << "Enter Your Work Hours per Month : ";
                cin >> monthHours;
            } while(monthHours < 1 && monthHours > 100);
            if(empCat == 'B') {
                salary = monthHours * 20;
            }
            if(empCat == 'S') {
                if(monthHours <= 50) {
                    salary = monthHours * 10;
                }
                if(monthHours > 50 && monthHours <= 100) {
                    salary = 50 * 10 +  (monthHours % 50) * 5;
                }
            }
        }
        if(empCode == 'K') {
            cout << "(B) for Large Size Toy" << endl;
            cout << "(S) for Medium Size Toy" << endl;
            cout << "(K) for Small Size Toy" << endl;
            cout << "Enter Your Category : ";
            cin >> empCat;
            cout << "Enter the Amount of Toys : ";
            cin >>  numToys;
            if(empCat == 'B') {
                salary = numToys * 8;
            }
            if(empCat == 'S') {
                salary = numToys * 5;
            }
            if(empCat == 'K') {
                salary = numToys * 2;
            }
        }
    cout << "==============RESULTS==============" << endl;    
    cout << "Name : " << empName << endl;
    cout << "Employee Number : " << empNumber << endl;
    cout << "Salary : " <<"RM " << salary << endl;
    break; 
    } 
    system("pause");
    return 0;
}