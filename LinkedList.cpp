
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
    public:
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        
        ~Node()
        {
            int value = this->data;
            
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
            cout<<"Memory Free For -> "<<value<<endl;
        }
};


void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
};

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
};


void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    Node* temp = head;
    int count = 0;
    
    if(position == 0)
    {
        insertAtHead(head, d);
        return;
    }
    
    while(count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else 
    {
        Node* previous = NULL;
        Node* current = head;
        int count = 1;
        
        while(count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}


void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    Node* n1 = new Node(100);
    Node* head = n1;
    Node* tail = n1;
    
    insertAtHead(head, 50);
    insertAtTail(tail, 150);
    insertAtPosition(head, tail, 2, 1000);
    print(head);
    
    cout<<endl;
    deleteNode(head, 2);
    print(head);
    
    return 0;
}
