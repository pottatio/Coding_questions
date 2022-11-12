#include<bits/stdc++.h>
#include <cctype>
using namespace std;
string caesarCipher(string s, int k);
int main(){
    int k = 11;
    string s = "middle-Outz";
    string ans = caesarCipher(s,k);
    cout<<ans<<endl;
    return(0);
}
string caesarCipher(string s, int k){
	int n = s.length();
	string ans;
	k = k%26;
	for(char c: s){
		if(isalpha(c)==0){
			cout<<c<<endl;
		}
		else{
			unsigned char en = c + k;
			if(isupper(c) && en>90)
				en = en-26;
			else if(c == '-'){
				ans+='-';
			}
			else if(islower(c) && en>122)
				en = en - 26;
			ans+=en;
		}
	}

	return(ans);

}
