//it only works if an array doesn't consists of duplicates
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,4,2,3,4,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);
    
    cout<<arr[1]<<" The second smallest ele"<<endl;
        cout<<arr[n-1]<<" The second largest ele"<<endl;
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[1]<<" The second smallest ele"<<endl;
    //     cout<<arr[n-1]<<" The second largest ele"<<endl;
    // }
}



//2 nd method