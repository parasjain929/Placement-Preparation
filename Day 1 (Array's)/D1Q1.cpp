//Find the Duplicate Number
 #include<iostream>
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
 	 int slow=nums[0];
        int fast=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        cout<<slow;

 }