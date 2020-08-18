//Maximum number of consecutive 1's
#include<bits/stdc++.h>
using namespace std;
int getMaxLength(bool arr[],int n)
{
	int count=0;
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			count=0;
		}
		else
		{
			count++;
			res=max(res,count);
		}
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	bool arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<getMaxLength(arr,n);

}