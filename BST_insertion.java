class node{
 int data;
  node left,right;
  node(int data){
  this.data=data;
    this.left=null;
    this.right=null;
  }
}
public class BST_insertion{
  public static node insert(node root, int data) {
        if (root == null)
            return new node(data);

        if (data < root.data) {
            root.left = insert(root.left, data);

        } else
            root.right = insert(root.right, data);
        
    
return root;

    }
  public static void inorder(node root){
        if(root==null) return;
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
  
  public static void main(String[] args){
    node root=null;
        root=insert(root, 5);
        root=insert(root, 1);
        root=insert(root, 10);
        inorder(root);
        
  
  }
}
