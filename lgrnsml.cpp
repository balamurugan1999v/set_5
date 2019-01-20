#include<iostream.h>
#include<conio.h>
void main()
{
int c,n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
for(j=i;i<n;i++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
cout<<a[0]<<" "<<a[n-1];
getch();
}
