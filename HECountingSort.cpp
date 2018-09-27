#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr1[n],arr2[100];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<100;i++) arr2[i]=0;

    for(i=0;i<n;i++)
    {
        arr2[arr1[i]]++;
    }
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    }
