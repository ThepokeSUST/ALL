#include<iostream>


using namespace std;


class node{
      
    public:
    int data;
    node* left;
    node* right;

    node(int ele){
        data=ele;
        left=right=NULL;
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

node* MirrorOf(node* root){
        
    if(!root) return NULL;

    node* root2=new node(root->data);

    root2->left=MirrorOf(root->right);
    root2->right=MirrorOf(root->left);
    return root2;
}
int main(){
     BT t1;
     t1.create();
     BT t2;
     t2.root=MirrorOf(t1.root);

     t1.pre();
     cout<<endl;
     t2.pre();
}

//2 3 10 -1 -1 11 -1 -1 6 -1 20 -1 -1