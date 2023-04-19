#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,0,02,0,212,9,0,02,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    
    int k=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[k]=arr[i];
            k++;
        }
    }
    
    while(k<n){
        temp[k]=0;
        k++;
    }
    
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

