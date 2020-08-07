//Find the Repeating and Missing Number
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
 	int xor1;
 	int set_bit;
 	int i;
 	int x=0,y=0;
 	xor1=nums[0];
 	for(i=0;i<n;i++)
 	{
 		xor1=xor1^nums[i];
 	}
 	for(i=1;i<=n;i++)
 	{
 		xor1=xor1^i;
 	}
 	set_bit=xor1 & ~(xor1-1);
 	for(i=0;i<n;i++)
 	{
 		if(nums[i] & set_bit)
 		{
 			x=x^nums[i];
 		}
 		else
 		{
 			y=y^nums[i];
 		}

 	}
 	for(i=1;i<=n;i++)
 	{
 		if(i & set_bit)
 		{
 			x=x^i;
 		}
 		else
 		{
 			y=y^i;
 		}
 	}
 	cout<<x<<y;
 }