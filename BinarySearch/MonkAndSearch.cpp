#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,j,b,c;
    char a;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>a>>b;

        c=0;

        for(i=0;i<n;i++)
        {
           if(a=='1')
           {
               if(ar[i]>b)
                c++;
           }
           if(a=='0')
           {
               if(ar[i]>=b)
                c++;
           }
        }
        cout<<c<<endl;
    }
return 0;
}
