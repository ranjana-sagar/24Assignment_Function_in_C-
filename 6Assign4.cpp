#include<iostream>
using namespace std;
#include<string.h>
int LCM(int,int,int);
int main()
{
   int a,b,c;
   cout<<"Enter three numbers:\n";
   cin>>a>>b>>c;
   cout<<" Least common multiple of "<<a<<","<<b<<","<<c<<" is "<<LCM(a,b,c);
   return 0;
}
int LCM(int a,int b,int c)
{
   int h,m=1,i;
   if(a>b)
      h=a>c?a:c;
   else
      h=b>c?b:c;   
   for(i=h;i<=(a*b*c);m++)
   {
      if((i%a==0)&&(i%b==0)&&(i%c==0))
         return i;
      i=h*m;  
   }   
   return i;
}
