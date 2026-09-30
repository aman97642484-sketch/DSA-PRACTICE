#include <iostream>
#include <Stack>
using namespace std;

class TwoStacks
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    TwoStacks(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int elm)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = elm;
        }
        else
        {
            cout << "Stack overflow";
        }
    }
    void push2(int elm)
    {
        if (top2 - top1 > 1)
        {
            top2++;
            arr[top2] = elm;
        }
        else
        {
            cout << "Stack overflow";
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int top()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            return -1;
        }
    }
};

int main()
{

    TwoStacks st(10);

    st.push1(5);
    st.push1(10);
    st.push1(15);

    st.push2(25);
    st.push2(30);
    st.push2(35);
    cout << st.top();
    return 0;
}