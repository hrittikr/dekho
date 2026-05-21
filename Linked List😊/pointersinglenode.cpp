#include <iostream>
using namespace std;

    class node
    {
        public:
        int data;
        node *next;
        node(int value)
        {
            data=value;
            next=NULL;
        }
    };
    node *createNode(int value)
    {
        node *n1=new node(value);
        return n1;
    }

    int main(){
        int value;
        cin>>value;
        node *node1=createNode(value);
        cout<<"Node created with value: "<<endl;
        cout<<node1->data<<endl;
        cout<<node1->next<<endl;
    }