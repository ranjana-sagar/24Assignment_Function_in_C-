#include<iostream>
using namespace std;
bool isPrime(int );

int main()
{
   int x;
   cout<<"Enter a number:\n";
   cin>>x;
   isPrime(x)?cout<<x<<" is a Prime numbers":cout<<x<<" is not prime number";
   return 0;
}
bool isPrime(int x)
{
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
          return false;
    return true;
}