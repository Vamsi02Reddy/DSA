//repeatedly swqp two adjacent elements if they are in wrong order
//12,45,23,51,19,8
//12,45,23,51,19,8 //iteration pccurse if the given two adjacent elements are sorted
//12,23,45,51,19,8
//12,23,45,51,19,8
//12,23,45,19,51,8
//12,23,45,19,8,51  //except last column we will repeat the proceduure untill the given array becomes sorted

//12,23,45,19,8,51           //12,23,19,8,45,51
//12,23,45,19,8,51          //12,23,19,8,45,51
//12,23,45,19,8,51          //12,19,23,8,45,51     //do the saame until the array becomes sort
//12,23,19,45,8,51          //12,19,8,23,45,51
//12,23,19,8,45,51          



#include  <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++ ;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        //cout<<endl;
    }
    
    return 0;

}