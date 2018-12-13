#include <bits/stdc++.h>
using namespace std;

struct Activitiy
{
	int start, finish;
};

bool activityCompare(Activitiy s1, Activitiy s2)
{
	return (s1.finish < s2.finish);
}

void printMaxActivities(Activitiy arr[], int n)
{
	sort(arr, arr+n, activityCompare);

	int i = 0,Count=1;

	for (int j = 1; j < n; j++)
	{

	if (arr[j].start >= arr[i].finish)
	{
		i = j;
		Count++;
	}
	}
	cout<<Count<<endl;
}

int main()
{

	int t,n;
	//freopen("BUSYMAN.txt","r",stdin);
	cin>>t;
	for(int k=1;k<=t;k++)
    {
     cin>>n;
     Activitiy arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i].start>>arr[i].finish;
     }

     printMaxActivities(arr, n);

    }
	return 0;
}

