// Level order traversal of the binary tree
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    vector<int> v;

    q.push(root);
    while (!q.empty())
    {
        node *x = q.front();
        v.push_back(x->data);
        q.pop();
        if (x->left != NULL)
        {
            q.push(x->left);
        }
        if (x->right != NULL)
        {
            q.push(x->right);
        }
    }
    for(int i:v){
        cout<<i<<" ";
    }
}
int main()
{
    /*  1
      /  \
     2   3
    / \  / \
   4  5 6  8
    */
    node *head = new node(1);
    node *p1 = new node(2);
    node *p2 = new node(3);
    node *p3 = new node(4);
    node *p4 = new node(5);
    head->left = p1;
    p1->left = p3;
    p1->right = p4;
    node *x1 = new node(6);
    node *x2 = new node(8);
    p2->left = x1;
    p2->right = x2;
    head->right = p2;
    cout<<"level order traversal : ";
    level_order_traversal(head);

}
