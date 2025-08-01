#include<iostream>


using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
    }
};

class BT{
         node* build(){
                

        int ele;
        cin>>ele;

        if(ele==-1){
            return NULL;
        }
        node* root=new node(ele);
        root->left=build();
        root->right=build();
        return root;
     }

      void showpre(node* rt){
        if(!rt)
          return;

        cout<<rt->data<<" ";
        showpre(rt->left);
        showpre(rt->right);
     }

    public:
     node* root;

     BT(){
        root=NULL;
     }

  
     void create(){
        root= build();
     }

   
     void pre(){
        showpre(root);        
     }

};



bool isIdentical(node* root1,node* root2){
           
    if(!root1 && !root2)
         return true;
    if((!root1&&root2) ||(root1&&!root2))
      return false;
    if(root1->data!=root2->data) 
      return false;
    
    return isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);  
}
int main(){
       
    BT tree1;
    tree1.create();
    BT tree2;
    tree2.create();

    cout<<isIdentical(tree1.root,tree2.root);


}