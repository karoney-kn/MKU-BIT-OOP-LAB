#include<iostream> 
using namespace std;
int main()  
{ 
  int n, num, digit ,rev=0;  
  cout<<"Enter a number:";  
  cin>>num;
  n=num;  
 
  while(num>0)  
  {  
    digit=num%10;    
    rev=(rev*10)+digit;
    num=num/10;  
  }  
  cout<<"The reverse of the number is:"<<rev<<endl;
  if(n==rev)
    cout<<"The number is a palindrome\n";  
  else  
  {  
    cout<<"The number is not a palindrome\n";
  }  
 return 0;  
} 