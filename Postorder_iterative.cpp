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
void Postorder(node * root)
    {
        stack<node *>st1,st2;
        vector<int>v;
        st1.push(root);
        while(!st1.empty()){
            node *x=st1.top();
            st1.pop();
            st2.push(x);
            if(x->left!=NULL){
                st1.push(x->left);
            }
            if(x->right!=NULL){
                st1.push(x->right);
            }
        }
        while(!st2.empty()){
            
            v.push_back(st2.top()->data);
            st2.pop();
        }
        for(int i:v){
            cout<<i<<" ";
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
    node *x3 = new node(10);
    p3->left = x3;
    head->right = p2;
    Postorder(head);
}
