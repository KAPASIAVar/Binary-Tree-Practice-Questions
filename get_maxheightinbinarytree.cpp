// find the height of the binary tree
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
int Get_height(node *root){
    if(root==NULL){
        return 0;
    }
    int l=Get_height(root->left); 
    int r=Get_height(root->right);
    int ans=max(l,r)+1;
    return ans;
}
int main(){
    /* 1
      / \
     2  3
    / \
   4  5
    */
    node *head=new node(1);
    node *p1=new node(2);
    node *p2=new node(3);
    node *p3=new node(4);
    node *p4=new node(5);
    head->left=p1;
    p1->left=p3;
    p1->right=p4;
    head->right=p2;
    cout<<"Max Height of Binary Tree :"<<Get_height(head)<<endl;


}
