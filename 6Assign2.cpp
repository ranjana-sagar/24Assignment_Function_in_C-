#include<iostream>
using namespace std;
#include<string.h>
void sort(char(*)[50],int,bool=true);

int main()
{
   char str[7][50];
   cout<<"Enter 7 strings:_\n";
   for(int i=0;i<7;i++)
      fgets(str[i],50,stdin);

   for(int i=0;i<7;i++)
      if(str[i][strlen(str[i])-1]=='\n')
         str[i][strlen(str[i])-1]='\0';

   sort(str,7);

   for(int i=0;i<7;i++)
      cout<<str[i]<<" ";
   return 0;
}
void sort(char (*p)[50],int size,bool tf)
{
   int i,j;
   char str[50]={0};
   if(tf==true)
   {
      for(i=0;i<size-1;i++)
         for(j=0;j<size-1-i;j++)
           if(strcmp(p[j],p[j+1])==1)
            strcpy(str,p[j]),strcpy(p[j],p[j+1]),strcpy(p[j+1],str);
   }
   else
   {
      for(i=0;i<size-1;i++)
         for(j=0;j<size-1-i;j++)
           if(strcmp(p[j],p[j+1])==-1)
            strcpy(str,p[j]),strcpy(p[j],p[j+1]),strcpy(p[j+1],str);
   }
}
