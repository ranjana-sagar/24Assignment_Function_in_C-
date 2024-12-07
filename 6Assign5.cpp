#include<iostream>
using namespace std;
#include<string.h>
void prime_factor(int);
int main()
{
   int n;
   cout<<"Enter a  number:\n";
   cin>>n;
   prime_factor(n);
   return 0;
}
void prime_factor(int n)
{
   int i,j;
   for(i=2;i<n;i++)
   {
      if(n%i==0)
      {
         for(j=2;j<i;j++)
           if(i%j==0)
              break;
         if(j==i)
           cout<<i<<" ";     
      }
   }
}