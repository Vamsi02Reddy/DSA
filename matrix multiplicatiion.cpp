//matrix multiplication
//for(int i=0;i<n1;i++)
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];
    // first matrix with dimension n1 and n2
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)     // first matrix with dimension n1 and n2
        {
            cin>>m1[i][j];
        }
    }
    //second matrix with dimension n2 and n3
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)     //second matrix with dimension n2 and n3
        {
            cin>>m2[i][j];
        }
    }
    // ans matrix with dimension n1 and n3
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)       // ans matrix with dimension n1 and n3
        {
            ans[i][j]=0;
        }
    }
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
             ans[i][j]+=m1[i][k]*m2[k][j];  
            }
        }
    }
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)       // ans matrix with dimension n1 and n3
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
