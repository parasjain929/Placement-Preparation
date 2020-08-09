#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int matrix[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[i][n-1-j];
			matrix[i][n-1-j]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}

}
