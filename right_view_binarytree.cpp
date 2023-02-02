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
vector<int> right_view(node *root){
	queue<node*>q;
	vector<int>ans;
	q.push(root);
	node *temp;
	while(!q.empty()){
		int n=q.size();
		for(int i=1;i<=n;i++){
			temp=q.front();
			q.pop();
			if(i==1) ans.push_back(temp->data);

			if(temp->right!=NULL){
				q.push(temp->right);
			}
			if(temp->left!=NULL){
				q.push(temp->left);
			}




		}
	}
	return ans;
}
int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    node *head=new node(1);
    node *x1=new node(2);
    node *x3=new node(3);
    node *x4=new node(4);
    node *x5=new node(5);
    node *x6=new node(6);
    node *x7=new node(7);
    head->left=x1;
    head->right=x3;
    x1->left=x4;
    x1->right=x5;
    x3->left=x6;
    x3->right=x7;
    node *x8=new node(10);
    x6->left=x8;
    
    vector<int>v;
    v=right_view(head);
    for(int i:v) cout<<i<<" ";

}
