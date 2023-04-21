
//deleting an element in an array  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,2,1,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    int pos=2;
    
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    // arr[pos]=insert_ele;
    n--;
    
    cout<<"Arrya with deletion0"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
}
