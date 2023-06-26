#include<bits/stdc++.h>
using namespace std;
//print  n to 0
void f1(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    f1(n-1);
}  

int main()
{
    int n;
    cin>>n;
    f1(n);
}