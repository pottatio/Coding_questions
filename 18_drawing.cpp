#include<bits/stdc++.h>

using namespace std;
int pageCount(int n, int p);
int main(){
    int n = 6;
    int p = 2;
    int ans = pageCount(n,p);
    cout<<ans<<endl;
    return(0);
}
int pageCount(int n, int p){
    return min(p/2, n/2 - p/2);
}