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
int main(){
       
    BT tree;
    tree.create();
    tree.pre();
}