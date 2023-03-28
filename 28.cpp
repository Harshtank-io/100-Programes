// Tree sort

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};

// Function to create the new BST Node
struct Node *newNode(int item)
{
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void storeSorted(Node *root, int arr[], int &i)
{
    if (root != NULL)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}

// function for insert a new node
Node *insert(Node *node, int key)
{

    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

void treeSort(int arr[], int n)
{
    struct Node *root = NULL;

    // creating the BST
    root = insert(root, arr[0]);

    for (int i = 1; i < n; i++)
        root = insert(root, arr[i]);

    // inorder travesal of BST
    int i = 0;
    storeSorted(root, arr, i);
}

int main()
{

    // array
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];-

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element a[" << i << "]: ";
        cin >> arr[i];
    }

    treeSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// done