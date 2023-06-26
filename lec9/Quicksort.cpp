#include<bits/stdc++.h>
using namespace std;

//quicksort algo with help recurion

int quickpart(int * arr,int low, int high){

    int pivot = arr[low];
    int i = low;
    int j =  high;
    while(i<j){

         while(arr[i] <= pivot && i <= high-1) i++;
         while(arr[j] > pivot && j >= low+1) j--;
         if(i < j)
         swap(arr[i],arr[j]);
    }
     swap(arr[low],arr[ j ]);
    return j;
}


void quicksort(int * arr,int low ,int high){

    if( low < high ){

        int partician = quickpart(arr,low,high);
        quicksort(arr,low,partician-1);
        quicksort(arr,partician+1,high);
    }
}


    int  main(){

        int n ;
        cin>>n;
        int a[n];
        for(int  i= 0 ; i< n ; i++)
           cin>>a[i];
           quicksort(a,0 ,n-1);
        for(int  i= 0 ; i< n ; i++)
           cout<<a[i]<<" ";
    }