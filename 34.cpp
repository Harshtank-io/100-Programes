// Print leaf node

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// make node
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

// print Leaf node
void printLeafNode(struct node *node)
{
    if (node == NULL)
    {
        return;
    }

    if (node->left == NULL && node->right == NULL)
    {
        printf("%d ", node->data);
        return;
    }
    printLeafNode(node->left);
    printLeafNode(node->right);
}

int main()
{
    struct node *root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);

    printf("Leaf nodes in BST: ");
    printLeafNode(root);
    printf("\n");
    return 0;
}