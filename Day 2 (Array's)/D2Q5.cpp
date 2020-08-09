//Stock Buy and Sell
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> price(n);
	for(int i=0;i<n;i++)
	{
		cin>>price[i];
	}
	if(n==1)
	{
		cout<<"NO Profit";
	}
	else
	{
		int i=0;
		while(i<n-1)
		{
			while((i<n-1) && (price[i+1]<=price[i]))
			{
				i++;
			}
			if(i==n-1)
			{
				break;
			}
			int buy=i++;
			while((i<n)&&(price[i]>=price[i-1]))
			{
				i++;
			}
			int sell=i-1;

			cout<<"Buy on "<<buy<<" Sell on "<<sell;
		}
	}
}