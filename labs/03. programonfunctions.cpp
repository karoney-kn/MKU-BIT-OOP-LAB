#include <iostream>
using namespace std;

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void divide(int a, int b);
void modulo(int a, int b);

int main()
{
    add(20, 10);
    sub(50, 30);
    mul(2, 5);
    divide(50, 10);
    modulo(25, 4);
    return 0;
}

void add(int a, int b)
{
    int c = a + b;
    cout << "The sum is: " << c << endl;
}

void sub(int a, int b)
{
    int c = a - b;
    cout << "The difference is: " << c << endl;
}

void mul(int a, int b)
{
    int c = a * b;
    cout << "The product is: " << c << endl;
}

void divide(int a, int b)
{
    int c = a / b;
    cout << "The division is: " << c << endl;
}

void modulo(int a, int b)
{
    int c = a % b;
    cout << "The modulo is: " << c << endl;
}