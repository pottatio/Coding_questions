#include<bits/stdc++.h>

using namespace std;
void solution(int n, vector<int> v);
int main(){
    int n = 10;
    vector<int> v = {1, 1 ,3, 1, 2, 1, 3, 3, 3, 3};
    solution(n,v);
    
    return (0);
}
void solution(int n, vector<int> ar){
    int sum = 0;
    for(auto it=ar.begin();it<ar.end();it++){
        sum = sum + *it;
    }
    cout<<sum;


}
// 10,10,10,10,20,20,20,30,50
