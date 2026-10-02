#include <bits/stdc++.h>
using namespace std;

void reverseString(string s)
{
    stack<char> st;

    for (char ch : s)
    {
        st.push(ch);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void reverseStringInArr(string s)
{
    stack<char> st;

    for (char ch : s)
    {
        st.push(ch);
    }

    string ans = "";
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    cout << "Ans is : " << ans;
}

int main()
{

    string s = "Aman";
    reverseString(s);
    reverseStringInArr(s);

    return 0;
}