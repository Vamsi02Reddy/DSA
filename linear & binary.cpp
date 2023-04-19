// linear linearSearch
//searching an element in an array

#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<linearSearch(arr,n,key);
    return 0;
}
// to reduce the complexity of linear search we use binary search
//well time complexity of linear search is O(n)



//binary SEarch time complexity of binary Search is logn base2



#include <iostream>
#include <climits>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
             high=mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return -1;
    }


int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int key;
    // cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    
    return 0;
}