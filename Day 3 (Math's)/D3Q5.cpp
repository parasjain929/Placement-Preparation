//Unique Path using DP
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int dp[m][n];
	for(int j=0;j<n;j++)
	{
		dp[0][j]=1;
	}
	for(int i=0;i<m;i++)
	{
		dp[i][0]=1;
	}
	for(int i=1;i<n;++i)
	{
		for(int j=1;j<n;++j)
		{
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
		}
	}
	cout<<dp[m-1][n-1];
}