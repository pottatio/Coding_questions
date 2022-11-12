#include<bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(vector<int> candles);
int main(){
    vector<int> candles = {4,4,1,3};
    int ans = birthdayCakeCandles(candles);
    cout<<ans<<endl;
    return(0);
}
int birthdayCakeCandles(vector<int> candles){
    int max = 0;
    int ans = 0;
    for(int i=0; i<candles.size() ; i++){
        if(candles[i] > max){
            max = candles[i];
        }
    }
    for(int i=0; i<candles.size() ; i++){
        if(candles[i]==max){
            ans++;
        }
    }
    return(ans);
}