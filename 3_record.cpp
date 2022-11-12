#include<bits/stdc++.h>

using namespace std;
vector<int> breakingRecords(vector<int> scores); 
int main(){
    vector<int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
    vector<int> ans = breakingRecords(scores);
    for(auto it=ans.begin(); it<ans.end(); it++){
        cout<<*it<<" ";
    }
    return(0);
}
vector<int> breakingRecords(vector<int> scores){
    vector<int> ans;
    int n = scores.size();
    int best = scores[0];
    int worst = scores[0];
    int best_count = 0;
    int worst_count = 0;
    for(int i=1;i<n;i++){
        if(scores[i]>best){
            best_count++;
            best = scores[i];
        }
    }
    ans.push_back(best_count);
    for(int i=1;i<n;i++){
        if(scores[i]<worst){
            worst_count++;
            worst = scores[i];
        }
    }
    ans.push_back(worst_count);
    return(ans);
}