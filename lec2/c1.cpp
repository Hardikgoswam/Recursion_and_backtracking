#include <bits/stdc++.h>
using namespace std;

void f1(int count){ 
  if(count == 0 ) 
    return; 
  cout<<"hello guys\n";
  f1(count-1);  //function calling it self called as recurion
        
}
int main(){
    int count;
    cin>>count;
    f1(count);
    return 0;
}