// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
    }
}

int main(){
    int arr[]={1,2,3,4,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
