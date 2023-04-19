//conversion

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout<<"LOWER CASE TO UPPER CASE"<<endl;
    string s="aACwcjnwwn";
    //1 st method
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    
    
    //2 nd method
   for(int i=0;i<=s.length();i++)
   {
       if(s[i]>='a' && s[i]<='z')
       {
           s[i]=s[i]-32;
       }
           
   }
   cout<<s<<endl;
   
   
   //1 st method
    cout<<"UPPER TO LOWER CASE CONVERSION:"<<endl;
    string str="avuhabuabAAXBIJNIUBAOHcbhbsaaib";
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    
    //2 nd method
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }    
    }
    cout<<str<<endl;

    return 0;
}

//forming a smallest and greatest number from a given input

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string n;
    cin>>n;
    sort(n.begin(),n.end(),greater<int>());
    cout<<n<<endl;
    reverse(n.begin(),n.end());
    cout<<n<<endl;
    
    return 0;
}

