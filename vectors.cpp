#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //method 1
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //method 2
    for(auto element:v){
        cout<<element<<endl;
    }
    return 0;
}