#include<bits/stdc++.h>
using namespace std;
int Counter(string s){
    int max,maxA,maxC,maxG,maxT,i;
    max=maxA=maxC=maxG=maxT=0;
    for(i=0;i<s.length();i++){
        switch(s[i]){
            case 'A': 
            maxA++;break;
            case 'C': 
            maxC++;break;
            case 'G': 
            maxG++;break;
            case 'T': 
            maxT++;break;
        }
    }
    if(maxA>=max)
        max=maxA;
    if(maxC>=max)
        max=maxC;
    if(maxT>=max)
        max=maxT;
    if(maxG>=max)
        max=maxG;
    return max; 
}
int main(){
    string s;
    getline(cin,s);
    cout<<Counter(s);
}