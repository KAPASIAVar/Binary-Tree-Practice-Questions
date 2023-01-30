// find the size of the binary tree
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *left,*right;
node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}
};
int Get_size(node *root){
    if(root==NULL) return 0;

    return Get_size(root->left)+Get_size(root->right)+1;
}
int main(){
    /*  1
      /  \
     2   3
    / \  / \
   4  5 6  8
    */
    node *head=new node(1);
    node *p1=new node(2);
    node *p2=new node(3);
    node *p3=new node(4);
    node *p4=new node(5);
    head->left=p1;
    p1->left=p3;
    p1->right=p4;
    node *x1=new node(6);
    node *x2=new node(8);
    p2->left=x1;
    p2->right=x2;
    head->right=p2;
    cout<<"The Size of Binary Tree :"<<Get_size(head)<<endl;


}
