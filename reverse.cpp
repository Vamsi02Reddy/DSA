//reverse a str 
#include <iostream>
#include<string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    reverse(st.begin(),st.end());
    cout<<st;
}


// replacing a str1 with str2 using recursion
#include <iostream>
#include <algorithm>
using namespace std;
void replacepi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' & s[1]=='i'){
        cout<<3.14;
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}


int main(){
    replacepi("pipip42424pp123i123i12o3i1p3o1");
    return 0;
    
}

