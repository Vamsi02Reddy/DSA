//using two pointers travesing the array
//T(N)=O)n*N
#include <bits/stdc++.h>
using namespace std;

void count_freq(int arr[],int n){
    vector<bool> visited(n,false);
    
    // n=sizeof(arr)/sizeof(arr[0];)
    
    for(int i=0;i<n;i++){
        if(visited[i] == true){  //skip this ele if already processed
            continue;
        }
               
        int count=1;
        
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}

int main()
{
    int arr[]={2,3,4,2,3,4,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_freq(arr,n);
    // return 0;
}



//method 2
//using unordered_map whre the T(n)=O(N)

#include <bits/stdc++.h>
using namespace std;

void count_freq(int arr[],int n){
   unordered_map<int,int> mpp;
   for(int i=0;i<n;i++){
       mpp[arr[i]]++;
   }
   for(auto x:mpp){
       cout<<x.first<<" "<<x.second<<endl;
   }
}

int main()
{
    int arr[]={2,3,4,2,3,4,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_freq(arr,n);
    // return 0;
}