// Given the root of a binary tree, invert the tree, and return its root.
#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    // recursively swap the left and right
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(4);

    // invert the binary tree
    TreeNode *invertedRoot = invertTree(root);

    cout << "Inverted binary tree: ";
    inorderTraversal(invertedRoot);
    cout << endl;

    return 0;
}