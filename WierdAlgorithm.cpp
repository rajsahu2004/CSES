#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    cout<<n<<" ";
    do{
        if(n==1)
        break;
        if(n%2==0)
        n/=2;
        else n=n*3+1;
        cout<<n<<" ";
    } while (n!=1);
    
}