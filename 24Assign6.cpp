#include<iostream>
using namespace std;
void swap(int &a,int &b);

int main()
{
    int a=5,b=6;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}