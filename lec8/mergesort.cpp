#include<bits/stdc++.h>
using namespace std;

//merge sort O(N(long n)) time complex-city

void merge(int * arr,int low,int high,int mid){

    vector<int>v;

    int lp = low;
    int lr = mid+1;
    

    while(lp <= mid && lr <= high){
        if(arr[lp] <= arr[lr]){
            v.push_back(arr[lp]);
            lp++;
        }
        else{
            v.push_back(arr[lr]);
            lr++;
        }
    }
    //agar left me element remaining hoto
    while(lp <= mid){
            v.push_back(arr[lp]);
            lp++;
        }
    //agar right me element remaining hoto
    while(lr <= high){
            v.push_back(arr[lr]);
            lr++;    
    }
    //////////////////VECTOR TO ARRAY COPY OPERATION////////////////////////
    int  i = low;
    for(auto it : v){
         arr[i++] = it; 
    }
}  

void mergesort(int * arr,int low,int high){//////mergesort 

    //base condition
    if( high == low )
        return;

    int mid = (low+high)/2;

    mergesort(arr,low,mid);   //left ke liye
    mergesort(arr,mid+1,high);   //right ke liye 
    merge(arr,low,high,mid);   //merge karne ke liye

}

int  main(){

    int m ; 
    cin>>m;
    int a[m];
    for(int i = 0 ; i < m ;i++){
        cin>>a[i];
    }
    cout<<"before mergesort : \n";
    for(int i = 0 ; i < m ;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
    
    mergesort(a,0,m-1);
    cout<<"after mergesort : \n";
    for(int i = 0 ; i < m ;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
    return 0;
}