// preorder treversal iterative solution
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
void preorder(node *root)
{
    if(root==NULL){
        cout<<0;
        return;
    }
    vector<int> v;
    stack<node *> st;
    st.push(root);
    while (!st.empty())
    {
        node *x = st.top();
        st.pop();
        v.push_back(x->data);
        if (x->right != NULL)
        {
            st.push(x->right);
        }
        if (x->left != NULL)
        {
            st.push(x->left);
        }
    }
    for (int i : v)
    {
        cout << i << " ";
    }
}
int main()
{ /*    1
       /  \
      2     3
     / \   / \
    4   5  6  8
   /
  10 
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
    node *x3=new node(10);
    p3->left=x3;
    head->right = p2;
    preorder(head);
}
