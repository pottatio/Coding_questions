#include<bits/stdc++.h>

using namespace std;
string superReducedString(string s);
int main(){
    string s = "abba";
    string ans = superReducedString(s);
    cout<<ans<<endl;

    return(0);
}

string superReducedString(string s){
    stack<char> st;
    string r;
    for(long unsigned int i=0; i<s.size() ; i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(!st.empty()){
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
    }
    else{
        r = "Empty String";
        return(r);
    }
    reverse(r.begin(),r.end());
    return(r);
}