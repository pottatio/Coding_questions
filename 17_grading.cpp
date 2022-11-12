#include<bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades); 
int main(){
    vector<int> grades = {73,67,38,33};
    vector<int> ans = gradingStudents(grades);
    for(auto it=ans.begin(); it < ans.end(); it++ ){
        cout<<*it<<endl;
    }
    return(0);
}
vector<int> gradingStudents(vector<int> grades){
    for(long unsigned int i=0 ; i<grades.size() ; i++){
        if(grades[i] == 38){
            grades[i] = 40;
        }
        if(grades[i] ==39){
            grades[i] = 40;
        }
        if(grades[i]>40){
            if((grades[i]+2)%5==0){
                grades[i] = grades[i]+2;
            }
            if((grades[i]+1)%5==0){
                grades[i] = grades[i]+1;
            }
        }
    }
    return(grades);
}