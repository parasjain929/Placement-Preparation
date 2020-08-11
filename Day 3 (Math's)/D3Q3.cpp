//Count Trailing Zeroes in factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=5;n/i>=1;i++)
	{
		count+=n/i;
	}
	cout<<count;
}