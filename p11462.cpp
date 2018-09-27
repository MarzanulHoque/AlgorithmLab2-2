#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr2[101],i;
    while(1){
    cin>>n;
    if(n==0)
        break;
    int arr1[n],arr3[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<101;i++) arr2[i]=0;

    for(i=0;i<n;i++)
    {
        arr2[arr1[i]]++;
    }

    for(i=1;i<101;i++)
    {
        arr2[i] += arr2[i-1];
    }

    for(i=0;i<n;i++)
    {
        arr3[arr2[arr1[i]]-1]=arr1[i];
        arr2[arr1[i]]=arr2[arr1[i]]-1;
    }
    for(i=0; i<n; i++)
    {
        cout<<arr3[i];
        if(i<n-1)cout<<" ";
    }
    cout<<endl;
    }
}
