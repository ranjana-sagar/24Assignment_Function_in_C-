#include<iostream>
using namespace std;
inline int max_no(int a,int b);
inline double max_no(double a,double b);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two integer number:_";
    cin>>a>>b;
    cout<<"\nEnter two real number:_";
    cin>>c>>d;
    cout<<"Maximum number etween "<<a<<","<<b<<" is "<<max_no(a,b)<<endl;
    cout<<"Maximum number etween "<<c<<","<<d<<" is "<<max_no(c,d)<<endl;
    return 0;
}
int max_no(int a,int b)
{
    if(a>=b)
       return a;
    return b;   
}
double max_no(double a,double b)
{
    if(a>=b)
       return a;
    return b;   
}