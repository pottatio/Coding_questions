#include<bits/stdc++.h>
using namespace std;
int towerBreakers(int n, int m); 
int main(){
	int t = 2;
	int n,m;
	while(t>0){
		cin>>n;
		cin>>m;
		int ans = towerBreakers(n,m);
		cout<<ans<<endl;
		t--;
	}
	return(0);
}
int towerBreakers(int n, int m){
	if(m==1 || n%2 == 0){
		return(2);
	}	
	else{
		return(1);
	}
} 
