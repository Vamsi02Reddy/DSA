#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1};
    int n = sizeof (arr) / sizeof (arr[0]);
    // if (n == 1 ) {
    //     cout << "Max Subarray Sum in an array : " << arr[0];
    // }
    
    bool all_negative=true;
    int maxi=INT_MIN;
    int cur_sum=0;
    for(int i=0;i<n;i++){
        cur_sum=cur_sum+arr[i];
        
        if(cur_sum<0){
            cur_sum=0;
        }
        else{
            all_negative=false;
            maxi=max(maxi,cur_sum);
        }
    }
    if(all_negative){  
        maxi=*max_element(arr,arr+n);       ///if all elements in an array are negative
    }
    cout<<"Max Subarray Sum in an array : "<<maxi;
}   
