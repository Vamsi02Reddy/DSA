// write a program to remove continous duplicate letters of a word or string

#include <iostream>
using namespace std;
string remdup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remdup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}


int main()
{
    cout<<remdup("aaaaabbbbbeeeeeffff");    //output :  abef

    return 0;
}


// write a program that return x to the end of the string

#include <iostream>
using namespace std;
string remdup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remdup(s.substr(1));
    if(ch=='x' || ch=='X'){
        return ans+ch;
    }
    return ch+ans;
}


int main()
{
    cout<<remdup("aaaaaXbbbXbbxeeeexeffff");    //output : aaaabbbbeeeeeffffxxXX

    return 0;
}
