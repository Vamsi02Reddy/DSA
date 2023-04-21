//Longest COnsecutive sequence in an array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={100, 200, 1, 3, 2, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);

    int prev=arr[0];
    int cur=1;
    int ans=1;

    for (int i=1;i<n;i++){
        if(arr[i]==prev+1){
            cur++;
        }
        else{
            cur=1;
        }

        prev=nums[i];

        ans=max(ans,cur);
    }
    cout<<ans;

}