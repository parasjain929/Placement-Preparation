 // Sort the array of 0's,1's & 2's // Dutch National Flag Algorithm
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
 	int low=0;
 	int high=n-1;
 	int mid=0;
 	while(mid<=high)
 	{
 		switch(nums[mid]){

 			case 0:
 				swap(nums[low++],nums[mid++]);
 				break;
 			case 1:
 				mid++;
 				break;
 			case 2:
 				swap(nums[mid],nums[high--]);
 				break;
 		}
 	}
 	for(int i=0;i<n;i++)
 	{
 		cout<<nums[i];
 	}
 }