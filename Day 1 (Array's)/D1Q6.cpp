 //Merge Overlapping Intervals
 #include<iostream>
#include<climits>
#include<vector>
#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    std::vector<vector<int>> intervals;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
        	cin>>intervals[i][j];
        }
    }
      vector<vector<int>> mergeInterval;
    if(intervals.size()==0)
    {
    	cout<<"Empty Intervals";

    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempInt=intervals[0];
    for(auto it:intervals)
    {
    	if(it[0]<=tempInt[1])
    	{
    		tempInt[1]=max(it[1],tempInt[1]);
    	}
    	else
    	{
    		mergeInterval.push_back(tempInt);
    		tempInt=it;
    	}
    }
    mergeInterval.push_back(tempInt);
    for(int i=0;i<mergeInterval.size();i++)
    {
    	cout<<mergeInterval[i][0]<<" ,"<<mergeInterval[i][0]<<endl;
    }
}