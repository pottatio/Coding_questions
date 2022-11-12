#include<bits/stdc++.h>

using namespace std;
int countingValleys(int steps, string path);
int main(){
    int steps = 8;
    string path = "UDDDUDUU";
    int ans = countingValleys(steps,path);
    cout<<ans<<endl;
    return(0);
}
int countingValleys(int steps, string path) {
    int valleys = 0;
    int level = 0;
    for(const char& c:path){
        if(c == 'U'){
            if(level == -1)
                valleys++;
            level++;
        }
        else{
            level--;
        }
    }
    return valleys;
}