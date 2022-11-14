#include <bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr);

int main(){
	vector<int> arr = {1, -3, 71, 68, 17};
	int ans = minimumAbsoluteDifference(arr);
	cout<<ans<<endl;
	return(0);
}

int minimumAbsoluteDifference(vector<int> arr){
	sort(arr.begin(),arr.end());
	int diff = abs(arr[0] - arr[1]);
	for(int i=arr.size()-1;i>=0;--i){
		if(abs(arr[i] - arr[i-1])<diff){
			diff = abs(arr[i] - arr[i-1]);
		}	

	}
	return(diff);
}
