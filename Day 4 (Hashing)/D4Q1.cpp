//Two number Sum 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int tsum; //target Sum
	cin>>tsum;
	unordered_set<int> nums;
	
	for(int num :arr)
	{
		int psum=tsum-num;
		if(nums.find(psum)!=nums.end())	
			cout<<psum<<" "<<num;
		else
		{
			nums.insert(num);
		}
	}
}