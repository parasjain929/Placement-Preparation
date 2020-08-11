//Excel Column Number
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string S;
	cin>>S;
	int result=0;
	for(const auto& c:S)
	{
		result*=26;
		result+=c-'A'+1;
		
	}
	cout<<result;
}