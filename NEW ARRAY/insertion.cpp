
//inserting an element in an array  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,2,1,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    
    int pos=2;
    int insert_ele=5;
    
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=insert_ele;
    
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
}
