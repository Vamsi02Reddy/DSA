//power of 2

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool ispowerof2(int n)
{
    return (n && !(n&(n-1)));   
}

int main()
{
    cout<<ispowerof2(16)<<endl;
    return 0;
}



//number of one's in a binary number

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int noof1(int n)
{
    int count=0;
    while(n)
    {
        n=n & (n-1);
        count++;
    }
    return count;   
}

int main()
{
    cout<<noof1(19)<<endl;
    return 0;
}



//finding an elemnet where all elements occurs twice except an element, is pressent one

#include <iostream>

using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    cout<<"where all numbers occurs twice except one numbere :: "<<unique(arr,7);

    return 0;
}
