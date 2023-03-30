#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

// to create a new node
Node *create(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insert(Node **head, int data)
{
    Node *newnode = create(data);
    Node *current = *head;
    Node *previous = nullptr;

    // traverse the linked list to find the correct postion
    while (current != nullptr && current->data < data)
    {
        previous = current;
        current = current->next;
    }

    // insert the new node at the correct postion
    if (previous == nullptr)
    {
        newnode->next = *head;
        *head = newnode;
    }
    else
    {
        previous->next = newnode;
        newnode->next = current;
    }
}

void dispaly(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    // adding some nodes

    insert(&head, 20);
    insert(&head, 4);
    insert(&head, 67);
    insert(&head, 23);
    insert(&head, 12);
    insert(&head, 89);

    // print the original list
    dispaly(head);

    // adding new node to the list
    insert(&head, 56);

    // display the updated list
    dispaly(head);

    return 0;
}

// done