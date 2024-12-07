#include<iostream>
using namespace std;
long long int facto(int n);
inline long long int combi(int n,int r);
void pascaltriangle(int n);

int main()
{
    int n=5;
    cout<<"Enter No of rows of  Pascal triangle:\n";
    cin>>n;
    pascaltriangle(n);
    return 0;
}
void pascaltriangle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
      for(j=0;j<=i;j++)
        cout<<combi(i,j)<<" ";
      cout<<endl;  
    }   
}
long long int facto(int n)
{
    if(n==0)
      return 1;
    return facto(n-1)*n;  
}
long long int combi(int n,int r)
{
    return ((1.0)*(facto(n)))/((facto(r))*facto(n-r));
}