#include<iostream>
using namespace std;
short int highestdigit(int);

int main()
{
   long long int x;
   cout<<"Enter a number:\n";
   cin>>x;
   cout<<"Highest digit in "<<x<<" is "<<highestdigit(x);
   return 0;
}
short int highestdigit(int x)
{
    short int h=0,d;
    while(x)
    {
        d=x%10;
        h<d?h=d:0;
        x/=10;
    }
    return h;
}