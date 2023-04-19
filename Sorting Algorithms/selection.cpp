//sorting in Arrays
//sorting is nothing but arraning an array in a monotonic way i.e either in ascending or descending
// find min elemnet in unsorted array and swap it with element at beginning
//12,45,23,51,99
//12,45,23,51,99
//12,23,51,99,45
//12,23,45,99,51
//12,23,45,51,99


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];      
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                 int temp=array[i];
                 array[i]=array[j];
                 array[j]=temp;   
            }          
        }
        for(int i=0;i<n;i++){
          cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}