#include<bits/stdc++.h>
using namespace std;

//reverse the array with help one variable of recursion
void  f1(int * arr,int n ,int s){
    if( s >= n/2){
        return;
    }
    swap(arr[s],arr[n-s]);
    f1(arr,s+1,n);
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