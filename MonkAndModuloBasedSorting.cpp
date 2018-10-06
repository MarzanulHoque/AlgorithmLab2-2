
#include <iostream>
using namespace std;
void merge(int a[],int st,int mid,int end,int b)
{
    int p=st,q=mid+1;
    int arr[10002];
    int k=0;
    for(int i=st;i<=end;i++)
    {
        if(p==mid+1)
        {

            arr[k++]=a[q++];
        }
        else if(q==end+1)
        {

            arr[k++]=a[p++];
        }
        else if(a[p]%b>a[q]%b)
        {

            arr[k++]=a[q++];
        }
        else
        {
            arr[k++]=a[p++];
        }
    }
    k=0;
    for(int i=st;i<=end;i++)
    {
        a[i]=arr[k++];
    }
}
void ms(int a[],int st,int end,int b)
{
    if(st<end)
    {
        int mid=(st+end)/2;
        ms(a,st,mid,b);
        ms(a,mid+1,end,b);
        merge(a,st,mid,end,b);
    }
}
int main()
{
    int n,k,a[10002];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
    ms(a,0,n-1,k);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
