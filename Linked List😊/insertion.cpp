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

// Function to insert at beginning
Node* insertAtBeg(Node* head, int value)
{
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
    return head;
}

int main()
{
    int n, value;
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;

    cout << "Enter key values:\n";

    // Creating linked list
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

    // Insert at beginning
    int newValue;
    cout << "Enter a value to insert at the beginning: ";
    cin >> newValue;

    head = insertAtBeg(head, newValue);

    // Display linked list
    cout << " updatedLinked List updated:\n";
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}