//Four Number Sum
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef pair<int, int> Pair;

bool fournumbersum(vector<int> arr,int sum){
	// create an empty map
	// key -> sum of a pair of elements in the array
	// value -> vector storing index of every pair having that sum
	unordered_map<int, vector<Pair>> map;
	int n=arr.size();

	// consider each element except last element
	for (int i = 0; i < n - 1; i++)
	{
		// start from i'th element till last element
		for (int j = i + 1; j < n; j++)
		{
			// calculate remaining sum
			int val = sum - (arr[i] + arr[j]);

			// if remaining sum is found in the map,
			// we have found a Quadruplet
			if (map.find(val) != map.end())
			{
				// check every pair having sum equal to remaining sum
				for (auto pair : map.find(val)->second)
				{
					int x = pair.first;
					int y = pair.second;

					// if Quadruplet don't overlap, print it and return true
					if ((x != i && x != j) && (y != i && y != j))
					{
						cout << "Quadruplet Found ("
							 << arr[i] << ", " << arr[j] << ", " << arr[x]
							 << ", " << arr[y] << ")";
						return true;
					}
				}
			}

			// insert current pair into the map
			map[arr[i] + arr[j]].push_back({i, j});
		}
	}

	// return false if Quadruplet don't exist
	return false;
}
int main(){
	int n;
	cin>>n;
	vector<int> array(n);
		for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int tsum; //target Sum
	cin>>tsum;
	cout<<fournumbersum(array,tsum);
	
}