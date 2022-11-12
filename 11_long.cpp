#include<bits/stdc++.h>

using namespace std;
long aVeryBigSum(vector<long> ar);

int main(){
    vector<long> ar = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    long a = aVeryBigSum(ar);
    cout<<a<<endl;
    return(0);
}
long aVeryBigSum(vector<long> ar){
    long sum = 0;
    for(auto it = ar.begin() ; it <ar.end() ; it++){
        sum = sum + *it;
    }
    return(sum);
}