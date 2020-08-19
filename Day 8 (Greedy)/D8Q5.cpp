//Greedy N meeting in one room
#include<bits/stdc++.h>
using namespace std;
struct Job
{
	char id;
	int dead;
	int profit;	
};
bool comparator(struct Job a, struct Job b)
{
	return(a.profit>b.profit);
}
void jobSchedule(struct Job arr[],int n)
{
	sort(arr,arr+n,comparator);
	int result[n];
	bool slot[n];
	for(int i=0;i<n;i++)
		slot[i]=false;
	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].dead-1);j>=0;j--)
		{
			if(slot[j]==false)
			{
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(slot[i])
			cout<<arr[result[i]].id<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	struct Job arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].id;
		cin>>arr[i].dead;
		cin>>arr[i].profit;
	}
	jobSchedule(arr,n);
	return 0;
}