#include<bits/stdc++.h>
using namespace std;

//help of backtracking n to 0

void f1(int n,int i){
    if(n < i)
    return;
    f1(n,i+1);
    cout<<i<<endl;
}
int main(){
   int  n; 
   cin>>n;
   f1(n,1);
}