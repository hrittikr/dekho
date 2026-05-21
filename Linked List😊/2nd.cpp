#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
bool search(Node* head, int key)
{
    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true; // Key found
        }
        temp = temp->next;
    }

    return false; // Key not found
}

int main()
{
    int n, value;
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;

    cout << "Enter key values:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> value;

        Node* newnode = new Node(value);

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Display the linked list
    cout << "Linked List: ";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}



