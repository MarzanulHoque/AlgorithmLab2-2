#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,s,q,sum,i,j;
    cin>>n;

    int v[n];

    for( i=0; i<n; i++)
    {
        cin>>v[i];
    }
       cin>>b;
     for( i=0; i<b; i++)
    {
        cin>>s;
        q=0;
        sum=0;
       for( j=0; j<n; j++)
       {
        if(v[j]<=s)
        {
            q++;
            sum+=v[j];
        }
       }
       cout<<q<<" "<<sum<<endl;
    }

}
