#include<bits/stdc++.h>

using namespace std;
vector<int> quickSort(vector<int> arr);
int main(){
    vector<int> arr = {5, 7, 4, 3, 8};
    vector<int> sol = quickSort(arr);
    for(auto it=sol.begin();it<sol.end();it++){
        cout<<*it<<endl;
    }
}
vector<int> quickSort(vector<int> arr){
    vector<int> sol;
    vector<int> left;
    vector<int> right;
    vector<int> equal;
    int pivot = arr[0];
    int n = arr.size();
    int i=0;
    while(i<n){
        if(arr[i]==pivot){
            equal.push_back(arr[i]);
            i++;
        }
        else if(arr[i]>pivot){
            right.push_back(arr[i]);
            i++;
        }
        else{
            left.push_back(arr[i]);
            i++;
        }
    }
    sol.insert(sol.end(),left.begin(),left.end());
    sol.insert(sol.end(),equal.begin(),equal.end());
    sol.insert(sol.end(),right.begin(),right.end());
    return(sol);
}