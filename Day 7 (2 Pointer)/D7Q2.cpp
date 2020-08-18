//Trapping Water problem
#include<bits/stdc++.h>
using namespace std;
int maxWater(int a[],int n)
{
	int size=n-1;
	int prev=a[0];
	int prev_index=0;
	int water=0;
	int temp=0;
	for(int i=1;i<=size;i++)
	{
		if(a[i]>=prev)
		{
			prev=a[i];
			prev_index=i;
			temp=0;
		}
		else
		{
			water+=prev-a[i];
			temp+=prev-a[i];
		}
	}
	if(prev_index<size)
	{
		water-=temp;
		prev=a[size];

		for(int i=size;i>=prev_index;i--)
		{
			if(a[i]>=prev)
			{
				prev=a[i];
			}
			else
			{
				water+=prev-a[i];
			}
		}
	}
	return water;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<maxWater(arr,n);

}