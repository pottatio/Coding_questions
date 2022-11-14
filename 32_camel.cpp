#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int camelcase(string s);
int main(){
	string s = "saveChangesInTheEditor";
	int ans = camelcase(s);
	cout<<ans<<endl;
	return(0);
}

int camelcase(string s){
	int count = 0;
	for(int i=0 ; i<s.size() ; i++)
	{
		if(isupper(s[i])){
			count++;
				}	
	}
	if(isupper(s[0])){
	return(count);
	}	
	else{
		return (count+1);
	}
}
