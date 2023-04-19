
// recursion (sum of all elements til n)
#include <iostream>

using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum=sum(n-1);
    {
        return(n+prevsum);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}


// recurion on power of any number
#include <iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower=power(n,p-1);
    {
        return prevpower*n;
    }
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}

// recursion using factorial
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfactorial=factorial(n-1);
    return prevfactorial*n;
}
int main(){
    int n;
    cin>> n;
    cout<<factorial(n)<<endl;
    return 0;
}


// fibnacci using recursion
#include <iostream>
using namespace std;
int fib(int n){
    if (n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>> n;
    cout<<fib(n)<<endl;
    return 0;
}


   
// checking an arraay whether an array is sorted or not using RECURSION
   
#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    if (n==1){
        return 1;
    }
    bool restarr=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarr);
}
int main(){
    int n=4;
    int arr[]={1,2,1,45};
    cout<<sorted(arr,n)<<endl;
    return 0;
    
}



   
// printing a numbers in increasing and decreasing taking an input of an number
// lets suppose we took 4 as an input
// then inc=1,2,3,4
//dec=4,3,2,1 
   
#include <iostream>
using namespace std;
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}


void dec(int n){
    if (n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
int main(){
    int n;
    cin>>n;
     inc(n);
     cout<<endl;
    
    dec(n);
    cout<<endl;
    return 0;
    
}


   
// first and last index of an key element
   
#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr, n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarr=lastocc(arr, n,i+1,key);
    
        if(restarr!=-1)
        {
            return restarr;
        }
    
    if(arr[i]==key)
    {
        return i;    
        
    }
    return -1;
}

    



int main(){
    int arr[]={2,3,41,2,4,54,52,2};
    cout<<firstocc(arr,8,0,2)<<endl;
    cout<<lastocc(arr,8,0,2)<<endl;
    return 0;
    
}























































