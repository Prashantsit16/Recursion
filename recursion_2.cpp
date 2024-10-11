//Prashant
//23070123102
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
  int n;
  
  cout<<"Enter the fibonacci number you want: ";
  cin>>n;
  int ans = fib(n);
  cout<<" Fibonacci number is:  "<<ans;
}