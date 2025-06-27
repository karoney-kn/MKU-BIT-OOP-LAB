#include <iostream>
using namespace std;

class Sample
{
private:  
    int a;
    int b;
    
public:
    Sample()
    {
        a = 5;
        b = 15;
    }
    
    friend void function1(Sample S);
};

void function1(Sample S)
{
    cout << "The private data members are:" << endl;
    cout << "a: " << S.a << endl;
    cout << "b: " << S.b << endl;
}

int main()
{
    Sample S;
    function1(S);
    return 0;
}