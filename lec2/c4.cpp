#include<bits/stdc++.h>
using namespace std;

//help of backtracking 0 to n

void f1(int n){
    if(n == 0)
    return;
    f1(n-1);
    cout<<n<<endl;
}
int main(){
   int  n; 
   cin>>n;
   f1(n);
}