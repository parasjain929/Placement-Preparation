//Fractional Knapsack problems
#include<bits/stdc++.h>
using namespace std;
struct Item
{
	int value,weight;
	//Item(int value,int weight):value(value),weight(weight){};	
};
bool comparator(struct Item a, struct Item b)
{
	double r1=(double)a.value/a.weight;
	double r2=(double)b.value/b.weight;
	return r1>r2;
}
double knapsack(int W,struct Item arr[],int n)
{
	sort(arr,arr+n,comparator);
	int curw=0;
	double finalValue=0;
	for(int i=0;i<n;i++)
	{
		if(curw+arr[i].weight<=W)
		{
			curw+=arr[i].weight;
			finalValue+=arr[i].value;
			cout<<curw<<" ";
		}
		else{
			int remain=W-curw;
			finalValue+=arr[i].value*((double)remain/arr[i].weight);
			break;
		}
		
	}
	return finalValue;
}
int main()
{
	int n;
	cin>>n;
	struct Item arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].value;
		cin>>arr[i].weight;
	}
	int capacity;
	cin>>capacity;
	cout<<knapsack(capacity,arr,n);
	return 0;
}
