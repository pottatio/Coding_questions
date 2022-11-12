#include<bits/stdc++.h>

using namespace std;
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2);
int main(){
    int d1 = 9,m1 = 6,y1 = 2015,d2 = 6,m2 = 6,y2 = 2015;
    int ans = libraryFine(d1,m1,y1,d2,m2,y2);
    cout<<ans<<endl;
    return(0);
}
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2){
    int fine = 0;
    if(y1>y2){
        fine = 10000;
    }
    else if(y1 == y2 && m1 > m2){
        fine = 500*(m1 - m2);
    }
    else if(y1 == y2 && m1 == m2 && d1 > d2){
        fine = 15*(d1 - d2);
    }
    else{
        return(0);
    }
    return(fine);
}

