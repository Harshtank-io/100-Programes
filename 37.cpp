// WAP to sort a number in ascending order in singly linked list.

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

// inserting the node
void insert(Node *head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// displaying the node
void dispaly(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// sorting the list
void sort(Node *head)
{
    Node *current = head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main()
{
    Node *head = NULL;

    // inserting a nodes in the list
    insert(&head, 20);
    insert(&head, 23);
    insert(&head, 2);
    insert(&head, 250);
    insert(&head, 678);
    insert(&head, 56);

    // original list
    cout << "Original linked list: ";
    dispaly(head);

    sort(head);

    cout << "Sorted linked list in ascending order: ";
    dispaly(head);
}

//done