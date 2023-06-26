#include<bits/stdc++.h>
using namespace std;

//reverse the array with help of recursion
void  f1(int * arr,int e ,int s){
    if( e <= s){
        return;
    }
    swap(arr[s],arr[e]);
    f1(arr,e-1,s+1);
}

int  main(){
    int n;
    cin>>n;
    int arr[n];

    for( int  i = 0 ; i < n ; i++ )
       cin>>arr[i];

    for( int  i = 0 ; i < n ; i++ )
       cout<<arr[i]<<" ";
       cout<<endl;

    f1(arr,n-1,0);

    for( int  i = 0 ; i < n ; i++ )
       cout<<arr[i]<<" ";

    return 0;
}