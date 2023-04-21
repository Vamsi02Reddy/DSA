#include <bits/stdc++.h>
using namespace std;                  //leader in an array    element which is greater than all of the elements on its right side in the array

int main()
{
    int arr[]={100, 22, 102,12, 0, 96};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector<int> res;
 
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(arr[i]<arr[j]){
              flag = true;
              break;
          }
        }
        if(!flag){
            res.push_back(arr[i]);
        }
        flag = false;
    }
    for(auto i:res){
        cout<<i<<" ";
    }
}
