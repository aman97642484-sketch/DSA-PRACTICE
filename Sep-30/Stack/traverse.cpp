#include <bits/stdc++.h>
using namespace std;
void traverse(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{

    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    traverse(s);
    return 0;
}