#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};

class Stack
{
public:
    Node *top;

    Stack()
    {
        top = nullptr;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        else
        {
            Node *temp = top;
            top = top->next;

            delete temp;
        }
    }
    int peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty" << endl;
        }
        return top->data;
    }
    bool isEmpty()
    {
        return top == nullptr;
    }
};

int main()
{

    Stack st;

    st.push(5);
    st.push(10);
    st.push(15);

    cout << st.peek() << endl; // 15

    st.pop();

    cout << st.peek() << endl; // 10

    return 0;
}