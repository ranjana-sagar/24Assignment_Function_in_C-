#include<iostream>
using namespace std;
void sort(int*,int,bool=true);

int main()
{
   int x[10];
   for(int i=0;i<10;i++)
     scanf("%d",x+i);
   sort(x,10);
   for(int i=0;i<10;i++)
      cout<<x[i]<<" ";  
   return 0;
}
void sort(int*p,int size,bool tf)
{
   int t,i,j;
   if(tf==true)
   {
      for(i=0;i<size-1;i++)
         for(j=0;j<size-1-i;j++)
           if(p[j]>p[j+1])
            t=p[j],p[j]=p[j+1],p[j+1]=t;
   }         
   else
   {
      for(i=0;i<size-1;i++)
         for(j=0;j<size-1-i;j++)
            if(p[j]<p[j+1])
              t=p[j],p[j]=p[j+1],p[j+1]=t;
   }
}
