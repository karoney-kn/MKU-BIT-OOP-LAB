#include <iostream>
using namespace std;

class employee
{
    int eid;
    float salary;
public:
    employee()
    {
        eid = 0;
        salary = 0.0;
    }
    
    employee(int x, float y)
    {
        eid = x;
        salary = y;
    }
    
    employee(employee &e)
    {
        eid = e.eid;
        salary = e.salary;
    }
    
    void display()
    {
        cout << "Employee ID: " << eid << endl;
        cout << "Salary is: " << salary << endl;
    }
};

int main()
{
    employee e1;
    e1.display();
    
    employee e2(123, 18000);
    e2.display();
    
    employee e3(e2);
    e3.display();
    
    return 0;
}