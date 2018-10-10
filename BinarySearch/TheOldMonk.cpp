#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[100001],b[100001];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int max=0;
        for(int i=0;i<n-max;i++)
        {

            if(a[i-1]!=a[i]||i==0)
            {
            int str=i,end=n-1;
            while(str<=end)
            {
                int mid=(str+end)/2;
                if(b[mid]>=a[i]&&b[mid+1]<a[i])
                {
                    if(mid-i>max)
                    max=mid-i;
                    break;
                }
                else if(b[mid]>=a[i])
                str=mid+1;
                else
                end=mid-1;
            }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
