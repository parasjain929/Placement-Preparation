//Minimum no. of coins
#include<bits/stdc++.h>
using namespace std;
int deno[]={1,2,5,10,20,50,100,200,500,2000};
int n=sizeof(deno)/sizeof(deno[0]);
void find(int v)
{
	sort(deno,deno+n);
	vector<int> ans;
	for(int i=n-1;i>=0;i--)
	{
		while(v>=deno[i]){
			v-=deno[i];
			ans.push_back(deno[i]);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}

}
int main()
{
	int n;
	cin>>n;
	find(n);
	return 0;
}