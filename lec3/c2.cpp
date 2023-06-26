#include<bits/stdc++.h>
using namespace std;

//print sum of n numbers with no extra argument print sum in main func. return by the f1 
int f1(int n){
    if(n==1){
        return 1;
    }
    return n+f1(n-1);
}

int  main(){
    int n;
    cin>>n;
    cout<<f1(n);
    return 0;
}