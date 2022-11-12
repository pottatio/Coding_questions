#include<bits/stdc++.h>
using namespace std;

void staircase(int n);

int main(){
    int n=6;
    staircase(n);
    return(0);
}

void staircase(int n){
    int rows = n;
    for(int i = 0; i < rows; i++){
        /* for j th row, first print rows-r spaces then stars */
        for(int j = 0; j < rows; j++){
            if(j < rows-i-1){
                printf(" ");
            } else {
                printf("#");
            }
        }
        /* move to next row */
        printf("\n");
    }
}