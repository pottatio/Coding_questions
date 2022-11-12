#include<bits/stdc++.h>

using namespace std;
void plusMinus(vector<int> arr); 
int main(){
    vector<int> arr = {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);
    return(0);
}
void plusMinus(vector<int> arr){
    vector<int> neg;
    vector<int> zero;
    vector<int> pos;
    float n = arr.size();
    for(auto it=arr.begin() ; it < arr.end() ; it++){
        if(*it < 0){
            neg.push_back(*it);
        }
        else if(*it == 0){
            zero.push_back(*it);
        }
        else{
            pos.push_back(*it);
        }
    }
    float ans_pos = pos.size()/n;
    float neg_pos = neg.size()/n;
    float zero_pos = zero.size()/n;
    printf("%.6f\n",ans_pos);
    printf("%.6f\n",neg_pos);
    printf("%.6f\n",zero_pos);
    
    
    // cout<<setprecision(6)<<pos.size()/n<<endl;
    // cout<<setprecision(6)<<neg.size()/n<<endl;
    // cout<<setprecision(6)<<zero.size()/n<<endl;
    
}
