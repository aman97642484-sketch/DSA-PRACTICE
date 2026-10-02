#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> st, int count, int size)
{

    // Base Case
    if (count == size/2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    solve(st, count + 1, size);

    st.push(num);

}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(8);
    st.push(12);
    st.push(2);
    st.push(4);

    int n = st.size();
    int count = 0;

    solve(st, count, n);

    return 0;
}