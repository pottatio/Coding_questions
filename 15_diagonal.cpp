#include<bits/stdc++.h>

using namespace std;
int diagonalDifference(vector<vector<int>> arr);
int main(){
    vector<vector<int>> arr
    {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    int ans = diagonalDifference(arr);
    cout<<ans<<endl;
    return(0);
}
int diagonalDifference(vector<vector<int>> arr){
    int n = arr.size();
   
    int sd_1 = 0;
    int sd_2 = 0;
    int i=0;
    int j=0;
    while(i<n && j<n){
        sd_1 = sd_1 + arr[i][j];
        i++;
        j++;
    }
    i=n-1;
    j=0;
    while(i>=0 && j<n){
        sd_2 = sd_2 + arr[i][j];
        i--;
        j++;
    }
    int diff = abs(sd_1-sd_2);
    // cout<<sd_1<<endl;
    // cout<<sd_2<<endl;
    return(diff);
    
}