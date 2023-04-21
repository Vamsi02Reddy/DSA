#include <bits/stdc++.h>
using namespace std;

void twoSum(int arr[],int n,int target){
   int left=0;
   int right=n-1;
   while(left<right){
       int sum=arr[left]+arr[right];
       if(sum==target){
           cout<<left<<" "<<right<<endl;
            left++;
            right--;
       }
       else if(sum>target){
           right--;
       }
       else{
           left++;
       }
    //   break;
   }
   
}

int main()
{
 int arr[]={2,3,4,2,3,4,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=11;
    
    twoSum(arr,n,target);
}
