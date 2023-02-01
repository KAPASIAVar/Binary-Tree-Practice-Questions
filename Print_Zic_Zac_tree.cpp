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
vector<int> print_zic_zac(node *root){
	deque<node *>q;
	vector<int>v;
	q.push_back(root);
	v.push_back(root->data);
	node *temp;
	int l=1;
	while(!q.empty()){
		int n=q.size();
		for(int i=0;i<n;i++){

			if(l%2!=0){
				temp=q.front();
				q.pop_front();

				if(temp->right!=NULL){
					q.push_back(temp->right);
					v.push_back(temp->right->data);
				}
				if(temp->left!=NULL){
					q.push_back(temp->left);
					v.push_back(temp->left->data);
				}

			}
			else{
				temp=q.back();
				q.pop_back();
				if(temp->left!=NULL){
					q.push_front(temp->left);
					v.push_back(temp->left->data);
				}
				if(temp->right!=NULL){
					q.push_front(temp->right);
					v.push_back(temp->right->data);
				}

			}
		}
		l++;



	}
	return v;

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
	vector<int>v;
	v=print_zic_zac(head1);
	for(int i:v){
		cout<<i<<" ";
	}

}
