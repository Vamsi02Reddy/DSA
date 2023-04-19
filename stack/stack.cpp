#include <iostream>
using namespace std;
#define n 100
class Stack
{
    int *array;
    int top;

public:
    Stack()
    {
        array = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        array[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element present" << endl;
            return;
        }
        top--;
    }
    int ttop()
    {
        if (top == -1)
        {
            cout << "No element" << endl;
            // return -1;
        }
        return array[top];
    }
    bool empty()
    {
        return top == -1;
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << st.ttop() << endl;
    st.pop();
    cout << st.ttop() << endl;
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.ttop() << endl;
    st.pop();
    cout << st.empty() << endl;

    // cout<<st.ttop()<<endl;

    return 0;
}