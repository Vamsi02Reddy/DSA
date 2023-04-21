#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
    vector <bool>visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }   
        }
        // cout<<arr[i]<<" "<<count<<endl;
        if(count> (n/2)){
            cout<<arr[i]<<" "<<count<<endl;
        }
    }
}

int main()
{
 int arr[]={2,2,2,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);    
}
