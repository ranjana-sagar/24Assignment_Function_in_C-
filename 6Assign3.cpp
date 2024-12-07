#include<iostream>
using namespace std;
#include<string.h>
void Rotate(int*,int,int=-1,int=1);
int main()
{
   int x[10],i;
   cout<<"Enter 10 numbers:\n";
   for(i=0;i<10;i++)
     cin>>x[i];
   Rotate(x,10,1,3);
   for(i=0;i<10;i++)
     cout<<x[i]<<" ";  
   return 0;
}
void Rotate(int*p,int size,int d,int n)
{
   int t,i,j;
   if(d==-1)
   {
      for(i=0;i<n;i++)
      {
         t=p[0];
         for(j=0;j<size-1;j++)
            p[j]=p[j+1];
         p[j]=t;   
      }
   }
   else if(d==1)
   {
      for(i=0;i<n;i++)
      {
         t=p[size-1];
         for(j=size-1;j>0;j--)
            p[j]=p[j-1];
         p[j]=t;   
      }
   }
}
