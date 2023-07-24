#include <iostream>
using namespace std;
int Factorial(int n)
{
    int mul=1;
    for(int i=1;i<n;i++)
    {mul*=i;}
    return mul;
}
int main()
{
    int n;
    cout<<"Enter your number";
    cin>>n;
    if(n==0)
    {cout<<"Factorial of number is "<<"1";}
    else {cout<<"Factorial of Number is "<<Factorial(n);}
    return 0;
}