//Merge Two Sorted Array's with No Extra Space  // Gap Method
 #include<iostream>
 using namespace std;
 int nextgap(int gap)
 {
 	if(gap<=1)
 		return 0;
 	return (gap/2)+(gap%2);
 }
 int main()
 {
 	int n,m;
 	cin>>n>>m;
 	int arr1[n],arr2[m];
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr1[i];
 	}
 	for(int i=0;i<m;i++)
 	{
 		cin>>arr2[i];
 	}
 	
    int i, j, gap = n + m; 
    for (gap = nextgap(gap); gap > 0; gap = nextgap(gap)) 
    { 
        // comparing elements in the first array. 
        for (i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
  
        //comparing elements in both arrays. 
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
            if (arr1[i] > arr2[j]) 
                swap(arr1[i], arr2[j]); 
  
        if (j < m) 
        { 
            //comparing elements in the second array. 
            for (j = 0; j + gap < m; j++) 
                if (arr2[j] > arr2[j + gap]) 
                    swap(arr2[j], arr2[j + gap]); 
        } 
    } 
 	for(int i=0;i<n;i++)
 	{
 		cout<<arr1[i]<<" ";
 	}
 	for(int i=0;i<m;i++)
 	{
 		cout<<arr2[i]<<" ";
 	}
 }
