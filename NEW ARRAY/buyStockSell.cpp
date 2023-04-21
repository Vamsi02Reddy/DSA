//optimal method
// O(n) is the time coomplexty
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int minPri=INT_MAX;
    int maxPro=0;
    
    for(int i=0;i<n;i++){
        minPri=min(minPri,arr[i]);
        maxPro=max(maxPro,arr[i]-minPri);
    }
    cout<<maxPro;
    
}



///brute force approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int maxPro=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxPro=max(maxPro,arr[j]-arr[i]);
            }
        }
    }
    cout<<maxPro;
    
}
