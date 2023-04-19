#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string>colors;
    colors.push('ggreen');
    colors.push('black');
    colors.push('white');
    colors.push('blue');
    cout<<colors.top()<<endl;
    cout<<colors.pop()<<endl;
    cout<<'checking whether th estack is empty '<<colors.isEmpty();
    return 0;
}



// LIFO last in first out technique
