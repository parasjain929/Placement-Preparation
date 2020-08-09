#include<bits/stdc++.h>
using namespace std;
void reverse1(int[],int,int);

int main(){
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	int k=n-2;
	while(k>=0 && nums[k]>=nums[k+1]){
		--k;
	}
	if(k==-1)
	{
		reverse1(nums,0,n-1);
		
	}
	for(int l=n-1;l>k;--l)
	{
		if(nums[l]>nums[k])
		{
			int tmp=nums[k];
			nums[k]=nums[l];
			nums[l]=tmp;
			break;
		}
	}
	reverse1(nums,k+1,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<nums[i];
	}
}
void reverse1(int nums[],int start,int end)
{
	while(start<end)
	{
		int tmp=nums[start];
		nums[start++]=nums[end];
		nums[end--]=tmp;
	}
}