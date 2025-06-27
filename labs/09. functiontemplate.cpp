#include <iostream>
using namespace std;

template<class T>
T maximum(T a, T b)  
{
    return (a > b) ? a : b;
}

template<class F>
F minimum(F a, F b) 
{
    return (a < b) ? a : b;
}

int main()
{
    int a, b;
    
    cout << "Enter two values:" << endl;
    cout << "Enter a and b: ";
    cin >> a >> b;
    
    cout << "The maximum value is: " << maximum(a, b) << endl;
    cout << "The minimum value is: " << minimum(a, b) << endl;
    
    return 0;
}