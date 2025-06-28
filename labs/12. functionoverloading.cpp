#include<iostream>
using namespace std;

class calculatingvolume  
{  
public:  
    int volume(int a)    
    {  
        return a * a * a;  
    }  
    
    int volume(int a, int b, int c)   
    {  
        return a * b * c;  
    }  
    
    double volume(double r, double h)   
    {  
        return 3.14 * r * r * h;  
    }  
};  

int main()  
{  
    calculatingvolume c;   
    
    cout << "Volume of the cube is:" << endl;  
    cout << c.volume(10) << endl;  
    
    cout << "Volume of the cuboid is:" << endl;  
    cout << c.volume(5, 10, 15) << endl;  
    
    cout << "Volume of the cylinder is:" << endl;  
    cout << c.volume(10.0, 15.0) << endl;   
     
    return 0;  
}