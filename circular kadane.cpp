//circular sum pf an array using kadane algorithm
//kadane's algorithm


#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int n){
    int max_n=INT_MIN;
    int curr_sum=0;
    for (int i=0;i<n;i++){
        curr_sum=curr_sum+arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        else{
            max_n=max(max_n,curr_sum);
        }
        
    }
    return max_n;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);
    
    return 0;
}
