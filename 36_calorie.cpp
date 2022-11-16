#include<bits/stdc++.h>

#include <ostream>
using namespace std;
long marcsCakewalk(vector<int> calorie);
int main(){
    vector<int> calorie = {1,3,2};
    long ans = marcsCakewalk(calorie);
    cout<<ans<<endl;
    return(0);
}

long marcsCakewalk(vector<int> calorie){
    sort(calorie.begin(),calorie.end(),greater<>());
    int weight = 0;
    vector<int> sol;
    for(int i=0 ; i<calorie.size() ; i++){
        weight = weight + (pow(2,i)*calorie[i]);
        
    }
    return(weight);

}
