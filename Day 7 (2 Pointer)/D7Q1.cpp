//3 Number sum problem
#include<bits/stdc++.h>
using namespace std;
bool findNumber(int a[],int n,int sum)
{
	int l,r;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		l=i+1;
		r=n-1;

		while(l<r){

			if(a[i]+a[l]+a[r]==sum){
				cout<<a[i]<<a[l]<<a[r];
				return true;
			}
			else if(a[i]+a[l]+a[r])
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
	return false;
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
	int sum;
	cout<<"Enter target Sum";
	cin>>sum;
	cout<<findNumber(arr,n,sum);

}