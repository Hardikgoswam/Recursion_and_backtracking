#include<bits/stdc++.h>
using namespace std;

//print product of n numbers with no extra argument print ans in main func. return by the f1 
int f1(int n){
    if(n==1){//base condi. important in base case
        return 1;
    }
    return n*f1(n-1);//replace the + to * 
}

int  main(){
    int n;
    cin>>n;
    cout<<f1(n);
    return 0;
}