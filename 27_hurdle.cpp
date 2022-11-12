#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int hurdleRace(int k, vector<int> height); 
int main(){
	int k = 4;
	vector<int> height = {1, 6, 3, 5, 2};
	int ans = hurdleRace(k,height);
	cout<<ans<<endl;
	return(0);
}
int hurdleRace(int k, vector<int> height) 
{
	int max_elem = *max_element(height.begin(),height.end());

	if(k<max_elem){
		return(0);
	}
	else{
		return(max_elem - k);
	}
}
