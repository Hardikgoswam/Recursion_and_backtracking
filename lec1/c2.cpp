#include <stdio.h>
int count =0 ; //global variable
void f1(){ 
  if(count == 5)   //base condition
     return;   
        
  printf("hello guys\n");
  count++;
  f1();  //function calling it self called as recurion
}
int main(){
    f1();
    return 0;
}