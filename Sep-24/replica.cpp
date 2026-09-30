#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int insertNode(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *replica(Node *head)
{
    Node *dummy = new Node(-1);
    Node *res = dummy;
    Node *temp = head;

    while (temp != NULL)
    {
        res->next = new Node(temp->data);
        temp = temp->next;
        res = res->next;
    }
    return dummy->next;
}
int main()
{

    Node *node1 = new Node(1);
    Node *head = node1;
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);
    cout << "Original: ";
    print(head);

    Node *copy = replica(head);

    cout << "Copy: ";
    print(copy);

    return 0;
}