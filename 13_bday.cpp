#include<bits/stdc++.h>

using namespace std;
int birthday(vector<int> s, int d, int m);
int main(){
    vector<int> s = {1, 2, 1, 3, 2};
    int d = 3;
    int m = 2;
    int ans = birthday(s,d,m);
    cout<<ans<<endl;
    return(0);
}

int birthday(vector<int> s, int d, int m){
    int n = s.size();
    vector<int> prefix(n,0);
    prefix[0] = s[0];
    for(int i=0 ; i<n ; i++){
        prefix[i] = prefix[i-1] + s[i];
    }
    int count = 0;
    int sum = 0;
    sum = prefix[m-1];
    if(sum == d){
        count++;
    }
    int index = 0;
    for(int i=m ; i<n ; i++){
        int temp = prefix[i] - prefix[index];
        if(temp == d){
            count++;
        }
        index++;
    }
    return(count);
}
