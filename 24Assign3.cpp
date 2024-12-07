#include<iostream>
#include<math.h>
using namespace std;
float power(float,float);

int main()
{
   float b,p,r=0;
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

    else if(b==0&&p>0)
      return 0;
    else if(b==0&&p<0)  
    {
        cout<<"INFINITE";
        exit(0);
    }
    ///////////////////////////  
    else if(p>0)
    {
        while(p)
          r*=b,p--;
        return r;  
    } 
    else if(p<0)
    {
        int P=abs(p);
        while(P)
          r*=b,P--;  
    }   
    return (1.0/r);
}