#include<bits/stdc++.h>

using namespace std;
vector<int> compareTriplets(vector<int> a, vector<int> b);
int main(){
    vector<int> a = {17, 28, 30};
    vector<int> b = {99, 16, 8};
    vector<int> sol = compareTriplets(a,b);
        for(auto it=sol.begin();it<sol.end();it++){
            cout<<*it<<endl;
        }
    return(0);
}
vector<int> compareTriplets(vector<int> a, vector<int> b){
    int alise_score = 0;
    int bob_score = 0;
    int i=0;
    int j=0;
    vector<int> sol;
    while(i<4 && j<4){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            bob_score++;
            i++;
            j++;
        }
        else{
            alise_score++;
            i++;
            j++;
        }
    }
    sol.push_back(alise_score);
    sol.push_back(bob_score);
    return(sol);
}