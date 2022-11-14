#include<bits/stdc++.h>

using namespace std;
int minimumNumber(int n, string password);
int main(){
	int n = 11;
	string password = "#HackerRank";
	int ans = minimumNumber(n,password);
	cout<<ans<<endl;
	return(0);
}
int minimumNumber(int n, string password){
    int lower = 1 , upper = 1 , digit = 1 , special = 1;
    int size = password.size();
    string s = ("!@#$%^&*()-+");
    for(char& c : password){
        if(c >= 'A' && c <= 'Z') upper = 0;
        else if(c >= 'a' && c <= 'z') lower = 0;
        else if(c >= '0' && c <= '9') digit = 0;
        else if(s.find(c) != string::npos) special = 0 ;
    }
    int total = lower + upper + digit + special;
    return(max(6-size,total));
}
