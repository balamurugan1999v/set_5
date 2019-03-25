#include <iostream.h>

using namespace std;

int main()
{
    int i,n,c,o,k,a[100];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        o=n-1;
        c=a[o];
        while(o!=0)
        {
            a[o]=a[o-1];
            o=o-1;
        }
        a[0]=c;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
