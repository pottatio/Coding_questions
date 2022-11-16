#include<bits/stdc++.h>
using namespace std;
int viralAdvertising(int n);
int main(){
 int n =3;
 int ans = viralAdvertising(n);
 cout<<ans<<endl;
}
int viralAdvertising(int n){
	int i , like = 0 , p=5 , day , l;
	for(int i=0 ; i<n ;i++){
		if(i!=0){
			p = (p/2)*3;
		}
		l=(p/2);
		like = like+l;
	}
	return(like);
}
