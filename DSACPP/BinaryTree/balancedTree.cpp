#include<iostream>

using namespace std;

class node{
    public:
      int val;
      node* left;
      node* right;

      node(int ele)
      {
        val=ele;
        left=right=NULL;
      }
};

node* createTree(){
    
    int ele;
    cin>>ele;
    if(ele==-1)
        return NULL;
    node* root= new node(ele);
    root->left=createTree();
    root->right=createTree();
    return root;
}
void show(node* root){

    if(root==NULL) return;

    cout<<root->val<<"->";
    show(root->left);
    show(root->right);
}
int isBalanced(node* root,bool &balanced){
       if(root==NULL)
          return 0;
      
    int l=isBalanced(root->left,balanced);
    if(balanced){
    int r=isBalanced(root->right,balanced);
    if(abs(l-r)>1)
       balanced=false;

    return 1+max(l,r);
    }
    return -1;
}
int main(){
    node* root= createTree();
    show(root);
    cout<<endl;
    bool check=true;
    isBalanced(root,check);
    cout<<check;

}