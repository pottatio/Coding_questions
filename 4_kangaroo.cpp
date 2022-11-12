//recheck
#include<bits/stdc++.h>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2);
int main(){
    int x1 = 2;
    int v1 = 1;
    int x2 = 1;
    int v2 = 2;
    string ans = kangaroo(x1,v1,x2,v2);
    cout<<ans<<endl;
    return(0);
}
string kangaroo(int x1, int v1, int x2, int v2){
    if((x2>x1) && v2>v1){
        return("NO");
    }
    else{
        if((v2-v1)==0){
            return("NO");
        }
        else{
            int result = (x1-x2) % (v2-v1);
            if(result==0){
                return("YES");
            }
            else{
                return("NO");
            }
        }
    }
}
