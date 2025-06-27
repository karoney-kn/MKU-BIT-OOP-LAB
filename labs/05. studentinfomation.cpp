#include <iostream>
#include <string>  
using namespace std;

class Student
{
    int rno;
    float percentage;
    string name;  
public:
    void store(int a, float b, string c) 
    {
        rno = a;
        percentage = b;
        name = c;
    }
    
    void display()  
    {
        cout << "Roll number is: " << rno << endl;
        cout << "Name is: " << name << endl;
        cout << "Percentage is: " << percentage << endl;
    }
}; 

int main()
{
    Student s1, s2;
    cout << "The Student 1 details are:" << endl;
    s1.store(123, 88.8f, "Saiteja");
    s1.display();
    
    cout << "The Student 2 details are:" << endl;
    s2.store(124, 78.8f, "Raj");
    s2.display();
    
    return 0;
}