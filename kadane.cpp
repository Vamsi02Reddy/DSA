//kadane's algorithm
//when sum of the element becomes negative then do it as 0
//array   

#include <iostream>
#include <climits>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
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
    cout<<max_n<<endl;
    
    

    return 0;
}
