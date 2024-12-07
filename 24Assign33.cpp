#include<iostream>
#include<math.h>
using namespace std;
float power(float,float);

int main()
{
   float b,p;
   //double r=0;
   cout<<"Enter the base value:\n";
   cin>>b;
   cout<<"Enter the power to the "<<b<<"\n";
   cin>>p;
   cout<<b<<" to the power "<<p<<" is "<<power(b,p);
   return 0;
}
float power(float b,float p)
{
    float r=1;
    if(p==0)
       return 1;
    if(p>0) 
    {
      r=power(b,p-1)*b;
      return r; 
    }  
    else if(p<0)
    {
      r=power(b,p+1)*(1.0/b);  
    } 
    return r;  
}