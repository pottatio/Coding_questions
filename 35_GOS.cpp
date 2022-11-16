#include<bits/stdc++.h>
#include <endian.h>
using namespace std;

string gameOfStones(int n);
int main(){
    int k = 2;
    string ans;
    while(k>1){
        int n;
        cin>>n;
        ans = gameOfStones(n);	
        cout<<ans<<endl;	
        k--;
    }
    return(0);

}

string gameOfStones(int n)
{
    string winner;
    if(n%7<2){
        winner = "Second";
    }	
    else{
        winner = "First";
    }
    return(winner);
}
