#include<iostream>
using namespace std;
inline int add(int a,int b);
inline double add(int a,float b);


int main()
{
    int a,b;
    float c;
    cout<<"Enter three numbers:_";
    cin>>a>>b>>c;
    cout<<"a+b = "<<add(a,b)<<endl;
    cout<<"a+c = "<<add(a,c)<<endl;
}
int add(int a,int b)
{
    return a+b;
}
double add(int a,float b)
{
    return a+b;  
}