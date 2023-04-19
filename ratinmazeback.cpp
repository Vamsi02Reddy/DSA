#include <iostream>
using namespace std;
bool isSafe(int** array,int x,int y,int n){
    if(x<n && y<n && array[x][y]==1){
        return true;
    }
    return false;
}
bool RatInMaze(int** array,int x,int y,int n,int** solarray){
    if(x==n-1 && y==n-1 && array[x][y]==1){
        solarray[x][y]=1;
        return true;
    }
    if(isSafe(array,x,y,n)){
        solarray[x][y]=1;
    if (RatInMaze(array,x+1,y,n,solarray)){
        return true;
    }
    if (RatInMaze(array,x,y+1,n,solarray)){
        return true;
    }
    solarray[x][y]=0;
    return false;         //backtracking
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    int **array=new int*[n];
    for(int i=0;i<n;i++){
        array[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
      int **solarray=new int*[n];
    for(int i=0;i<n;i++){
        solarray[i]=new int[n];
        for(int j=0;j<n;j++){
            solarray[i][j]=0;
        }
    }
    if (RatInMaze(array,0,0,n,solarray)){
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cout<<solarray[i][j]<<" ";
            }
            cout<<endl;
        }
     }
     return 0;
    }