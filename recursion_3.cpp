//Prashant4
//23070123102
#include<iostream>
using namespace std;
int sum (int n)
{
    if (n <= 1) 
        return n; 
    return n + sum(n - 1); 
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int s= sum(n);
    cout<<"The sum of number is: "<<s;
    return 0;
}