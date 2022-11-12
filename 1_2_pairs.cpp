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
    int pair = 0;
    sort(ar.begin(),ar.end());
    // for(auto it=ar.begin(); it<ar.end(); it++){
    //     cout<<*it<<" ";
    // }
    int i=0, j=1;
    if(n%2==0)
    {
        while(j<=n){
            if(ar[i] == ar[j]){
                    j++;
                }
            else{
                pair = pair + (j-i)/2;
                i=j;
                j++;
                if(j == n){
                    pair = pair + (j-i)/2;
                }
            }
        
        }
    } 
    else{
        while(i<n && j<n){
                if(ar[i] == ar[j]){
                    pair++;
                }
                i=i+2;
                j=j+2;
            }
    }
    cout<<pair<<endl;
    
//    cout<<pair<<endl;

}
// 10,10,10,10,20,20,20,30,50
