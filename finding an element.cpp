#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int any_num;
    cin>>any_num;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the following matrix :"<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
     cout<<endl;
    }
    // int any_num;
    // cin>>any_num;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==any_num)
            {
                cout<<i<<","<<j<<endl;
                flag=true;
            }
        }
    
    if(flag)
    {
        cout<<"element found"<<endl;
    }
    else
    {
        cout<<"element not found"<<endl;
    }
    return 0;
    }
        
    }

