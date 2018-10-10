#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,d,c=0;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>d;
        c=0;
        for(j=0;j<n;j++)
        {
            if(d>arr[j])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
