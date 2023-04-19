//TIme complexity best case T(n)=O(nLogn)
//worst case T(n)=O(n*2)

#include <iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int partition(int arr[],int l,int r){
    int pi=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pi){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        //cout<<"hello";
        int pi=partition(arr,l,r);   //pi stands for pivot i.e, last element of an array it could be anythong ut taking last ele is only for the worst case
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // quicksort(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // // cout<<endl;
    // return 0;

    int arr[]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
