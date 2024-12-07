#include<iostream>
using namespace std;
inline int add(int a,int b,int=0);

int main()
{
    int a,b,c;
    cout<<"Enter three numbers:\n";
    cin>>a>>b>>c;
    cout<<"Sum of three number is "<<add(a,b,c)<<endl;
    cout<<"Sum of two number is "<<add(a,b);
    return 0;
}
int add(int a,int b,int c)
{
   return a+b+c;
}  