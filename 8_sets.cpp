#include<bits/stdc++.h>

using namespace std;
int getTotalX(vector<int> a, vector<int> b);
int main(){
    vector<int> a = {3,4};
    vector<int> b = {24,48};
    int x = getTotalX(a,b);
    cout<<x<<endl;
    return(0);
}
int getTotalX(vector<int> a, vector<int> b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count = 0;
    int times_multiplied = 2;
    int num = a.back();
    while(num<=b.front()){
        bool is_multiple = true;
        bool is_factor = true;
        for(int i=0;i<a.size();i++){
            if(num % a[i] != 0){
                is_multiple=false;
                break;
            }
        }
        for(int j=0;j<b.size();j++){
            if(is_multiple && b[j]% num != 0){
                is_factor = false;
                break;
            }
        }
        if(is_multiple && is_factor){
            count++;
        }
        num = a.back()*times_multiplied;
        times_multiplied++;
        
    }
    return count;
    
}