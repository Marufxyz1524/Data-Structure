#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = new Node(2);

    Node *a = new Node(5);
    Node *b = new Node(4);
    Node *c = new Node(7);
    Node *d = new Node(8);

    root->left = a;
    root->right = b;
    b->left = c;
    b->right = d;

    postorder(root);

    return 0;
}