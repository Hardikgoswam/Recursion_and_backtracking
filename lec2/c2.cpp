#include<bits/stdc++.h>
using namespace std;

//print 0 to N number
void f1(int n,int i){
    if( n < i){
      return;
    }
    cout<<i<<endl;
    f1(n,i+1);
}  

int main()
{
    int n;
    cin>>n;
    f1(n,1);
}