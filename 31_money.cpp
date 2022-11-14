#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b);
int main(){
	vector<int> keyboards = {4};
	vector<int> drives ={5};
	int b = 5;
	int ans =getMoneySpent(keyboards, drives, b);
	cout<<ans<<endl;
	return(0);
}
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b){
	int max = -1;
	int sum;
	int n = keyboards.size();
	int m = drives.size();
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++){	
			sum = keyboards[i]+drives[j];
			if(sum>max&&sum<=b)
				max=sum;
			}

		}
	return(max);

}
