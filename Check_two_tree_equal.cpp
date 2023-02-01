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
void postorder(node *root,vector<int> &v){
	if(root==NULL) return;

	v.push_back(root->data);
	postorder(root->left,v);
	postorder(root->right,v);
}
void preorder(node *root,vector<int>& v){
	if(root==NULL) return;

	preorder(root->left,v);
	preorder(root->right,v);
	v.push_back(root->data);
}
void inorder(node *root,vector<int>&v){
	if(root==NULL) return;

	inorder(root->left,v);
	v.push_back(root->data);
	inorder(root->right,v);
}
bool Checkequal(node *head1,node *head2){
	vector<int>x;
	vector<int>y;
	postorder(head1,x);
	postorder(head2,y);
	if(x!=y) return 0;

	x.clear();
	y.clear();

	preorder(head1,x);
	preorder(head2,y);
	if(x!=y) return 0;
	
	x.clear();y.clear();
	
	inorder(head1,x);
	inorder(head2,y);
	if(x!=y) return 0;

	return 1;

}

int main(){
	node *head1=new node(-10);
	node *p1=new node(9);
	head1->left=p1;
	node *p2=new node(20);
	head1->right=p2;
	node *p3=new node(15);
	node *p4=new node(7);
	p2->left=p3;
	p2->right=p4;
	node *head2=new node(-10);
	node *x1=new node(9);
	head2->left=x1;
	node *x2=new node(20);
	node *x3=new node(15);
	node *x4=new node(8);
	head2->right=x2;
	x2->left=x3;
	x2->right=x4;
	if(Checkequal(head1,head2)){
		cout<<"The given Two trees are equal\n";
	}
	else cout<<"Not equal"<<endl;
	

}
