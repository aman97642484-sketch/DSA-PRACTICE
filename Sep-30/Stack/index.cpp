#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    cout << s.top() << endl;
    if (s.empty())
        cout << "Stack is Empty"<<endl;
    else
        cout << "Stack is not empty"<<endl;

    cout << "Size of stack is :" << s.size();

    return 0;
}