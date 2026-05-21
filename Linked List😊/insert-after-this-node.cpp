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
// Function to insert after a given node
void insertAfterNode(Node* prevNode, int value)
{
    if (prevNode == NULL)
    {
        cout << "Previous node cannot be NULL." << endl;
        return;
    }

    Node* newnode = new Node(value);
    newnode->next = prevNode->next;
    prevNode->next = newnode;
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

    // Insert after a given node
    int prevValue, newValue;
    cout << "Enter the value of the node after which to insert: ";
    cin >> prevValue;
    cout << "Enter a value to insert: ";
    cin >> newValue;

    // Find the previous node
    Node* current = head;
    while (current != NULL && current->data != prevValue)
    {
        current = current->next;
    }

    if (current != NULL)
    {
        insertAfterNode(current, newValue);
        cout << "Node inserted after " << prevValue << "." << endl;
    }
    else
    {
        cout << "Node with value " << prevValue << " not found." << endl;
    }
// Display linked list
cout << "Linked List after insertion:\n";
Node* temp2 = head;

while (temp2 != NULL)
{
    cout << temp2->data << " ";
    temp2 = temp2->next;
}
cout << endl;
    return 0;
}