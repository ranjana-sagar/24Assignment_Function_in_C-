#include<iostream>
using namespace std;
bool inFibo(int x);
int main()
{
    int n;
    cout<<"Enter the no that you want to search in fibonacci series:\n";
    cin>>n;
    inFibo(n)?cout<<"in Fibonacci series":cout<<"not present in fibonacci";
    return 0;
}
bool inFibo(int x)
{
    int a=-1,b=1,c=a+b;
    while(c<=x)
    {
        if(x==c)
          return true;
        a=b,b=c,c=a+b;
    }
    return false;
}