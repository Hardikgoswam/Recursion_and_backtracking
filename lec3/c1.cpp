#include<bits/stdc++.h>
using namespace std;

//print sum of n numbers with argument print sum f1 func.
void f1(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    f1(n-1,sum+n);
}

int  main(){
    int n,sum=0;
    cin>>n;
    f1(n,sum);
    return 0;
}