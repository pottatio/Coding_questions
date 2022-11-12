#include<bits/stdc++.h>

using namespace std;
void bonAppetit(vector<int> bill, int k, int b);
int main(){
    int b = 7;
    int k = 1;
    vector<int> bill = {3, 10, 2, 9};
    bonAppetit(bill,k,b);
    return(0);
}
void bonAppetit(vector<int> bill, int k, int b){
    int sum = 0;
    for(auto it = bill.begin(); it < bill.end() ; it++){
        sum = sum + *it;
    }
    int anna_exp = sum - bill[k];
    int check_sum = anna_exp / 2;

    if(check_sum == b){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-check_sum<<endl;
    }
}