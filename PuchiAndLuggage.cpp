#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];

        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }

        }
        cout<<endl;

    }
}
