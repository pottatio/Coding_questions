#include<bits/stdc++.h>

using namespace std;
int migratoryBirds(vector<int> arr);
int main(){
    vector<int> arr = {1,1,2,2,3};
    int ans = migratoryBirds(arr);
    cout<<ans<<endl;
    return(0);
}
int migratoryBirds(vector<int> arr){
    int n = arr.size();
    int freq[6] = {0};
    for(int i=0 ; i<n ; i++){
        int index = arr[i];
        freq[index]++;
    }
    int maxtype = 1;
    int maxfreq = freq[1];
    for(int j=2 ; j<6 ; j++){
        if(freq[j]>maxfreq){
            maxtype = j;
            maxfreq = freq[j];
        }
    }
    return(maxtype);


}