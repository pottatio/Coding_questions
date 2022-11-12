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


int minimumNumber(int n, string password)
{
	vector<int> flag = {0,0,0,0,0};
	if(n<6){
		return(abs(n-6));
	}
	else{
		for(auto &ch : password){
			if(n >= 6){
				flag[0] = 1;
			}
			if(isdigit(ch)){
				flag[1] = 1;
			}
			if(islower(ch)){
				flag[2] = 1; 
			}
			if(isupper(ch)){
				flag[3] = 1;
			}
			if(ch == '!' || ch == '@' || ch == '#' || ch == '$'
      || ch == '%' || ch == '^' || ch == '&' || ch == '*'
      || ch == '(' || ch == ')' || ch == '-' || ch == '+' ){
         flag[4] = 1;
        }
	}
	int count = 0;
	for(auto it=flag.begin(); it<flag.end(); it++){
        if(*it == 0){
			count++;
		}
    }
	return(count);

}	

}
