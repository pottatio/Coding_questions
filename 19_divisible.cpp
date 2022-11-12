#include<bits/stdc++.h>

using namespace std;
int divisibleSumPairs(int n, int k, vector<int> ar);
int main(){
    int n = 6;
    int k = 3;
    vector<int> ar = {1, 3, 2, 6, 1, 2};
    int ans = divisibleSumPairs(n,k,ar);
    cout<<ans<<endl;
    return(0);
}
int divisibleSumPairs(int n, int k, vector<int> ar){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if((ar[i]+ar[j])%k == 0){
                count++;
            }
        }
    }
    return(count);
}