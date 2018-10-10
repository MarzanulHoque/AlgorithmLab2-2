#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i;
    cin>>n>>q;

    int v[n];
    for( i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort (v, v+n);

    for(int c=1; c<=q; c++)
    {
        int d;
        cin>>d;
     int low=1;
     int high=n;
     int mid=(high+low)/2;
   while(low<=high && v[mid]!=d)
   {
     if(v[mid]<d)
     {
         low=mid+1;
     }
     else
     {
         high=mid-1;
     }
         mid=(high+low)/2;
 }
  if(v[mid]==d)
           cout<<"YES"<<endl;
       else
          cout<<"NO"<<endl;
}
return 0;
}
