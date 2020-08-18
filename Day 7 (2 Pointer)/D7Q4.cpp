//Remove duplicate in a sorted array
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	int j=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i] !=arr[i+1])
		{
			arr[j++]=arr[i];
		}
	} 
	arr[j++]=arr[n-1];
	return j;
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
	cout<<endl<<removeDuplicates(arr,n);

}