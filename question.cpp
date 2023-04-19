// Problem:
//Given an array a[] of size n.For every i from 0 to n - 1 output max(a[0], a[1], ..., a[i]).



#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mn=-832986976;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        mn=max(arr[i],mn);
        cout<<mn<<" ";
    }
    //cout<<mn<<endl;
    return 0;
      
}



//////////////////// question on airthmetic subarray 
//finding the max length of airthmetic sub-array
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int pd=arr[1]-arr[0];   //previous common difference
    int curr=2;
    int ans=2;    //max airthmetic subarray length
    int j=2;
    
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd==arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<" ";

    return 0;
}


//finding no of sub arrays
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //int min=-232322;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  // no of subarrays
  for (int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          for (int k=i;k<=j;k++){
              cout<<arr[k]<<",";
          }
          cout<<endl;
      }
  }
  cout<<endl;
    return 0;
}
