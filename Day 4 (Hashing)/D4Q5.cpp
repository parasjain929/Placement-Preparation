//Count number of subarray's of array with given XOR
#include<bits/stdc++.h>
using namespace std;
long long subarrayXor(int arr[],int n,int m)
{
	unordered_map<int,int >mp;
	long long ans=0;
	int xorArr[n];
	xorArr[0]=arr[0];
	for(int i=0;i<n;i++)
	{
		xorArr[i]=xorArr[i-1]^arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int tmp =m^xorArr[i];
		ans=ans+((long long)mp[tmp]);
		if(xorArr[i]==m)
		{
			ans++;
		}
		mp[xorArr[i]]++;
	}
	return ans;
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
	int m;
	cin>>m;
	cout<<subarrayXor(arr,n,m);
}