#include<iostream>
using namespace std;
inline float area(int r);
inline float area(int l,float);
inline float area(int b,int h);

int main()
{
    int r,l,b,h;
    float w;
    cout<<"Enter the radius of circle:_";
    cin>>r;
    cout<<"\nEnter the length and width of rectangle:_";
    cin>>l>>w;
    cout<<"\nEnter the base and height of triangle:_";
    cin>>b>>h;
    //////////////////////////////////////////////////////////////
    cout<<"Area of Circle is "<<area(r)<<endl;
    cout<<"Area of Rectangle is "<<area(l,w)<<endl;
    cout<<"Area of Triangle is "<<area(b,h)<<endl;
    return 0;

}
float area(int r)
{
    return 3.14*r*r;
}
float area(int l,float w)
{
    return l*w;
}
float area(int b,int h)
{
    return (1/2.0)*b*h;
}