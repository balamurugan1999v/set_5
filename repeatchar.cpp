#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],n,k,j=0;
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(k==a[i])
j=j+1;
}
if(j!=0)
cout<<"yes";
else
cout<<"no";
getch();
}
