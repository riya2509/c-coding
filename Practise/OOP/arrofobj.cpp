// Array of objects
#include <iostream>
using namespace std;

class Employee
{
    int salary;
    int id;

public:
    void setid()
    {
        cout << "Enter the id of employee";
        cin >> id;
        cout << "Enter the salary of employee";
        cin >> salary;
    }
    void getid()
    {
       cout<<"The id and salary of the employee is:"<<id<<salary;
    }

};
int main(){
    int n;
    cout<<"Enter the number of objects";
    cin>>n;
    Employee obj[n];
    for(int i=0;i<n;i++){
        obj[i].setid();
        obj[i].getid();
    }
    return 0;
}
