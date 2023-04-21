#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector <int> pos;
    vector <int> neg;
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
     vector<int> res;
     
     int max_len = max(pos.size(), pos.size());

    for (int i = 0; i < pos.size(); i++) {
        // if (i < vector1.size()) {
            res.push_back(pos[i]);
        // }
        // if (i < vector2.size()) {
            res.push_back(neg[i]);
        // }
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
  
    
}
