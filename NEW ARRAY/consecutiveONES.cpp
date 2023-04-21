#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,1,1,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int max_element=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;

        }
        else{
            count=0;
        }
        max_element=max(max_element,count);
    }
    cout<<max_element;
}