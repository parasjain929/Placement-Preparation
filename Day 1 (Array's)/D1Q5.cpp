//Kaedene's Algorithm // Find Maximum Sum Subarray
 #include<iostream>
#include<climits>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int nums[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int max_so_far=INT_MIN;
    int max_end=0;
    for(int i=0;i<n;i++)
    {
        max_end=max_end+nums[i];
        if(max_so_far<max_end)
        {
            max_so_far=max_end;
        }
        if(max_end<0)
        {
            max_end=0;
        }
    }
    cout<<max_so_far;
}