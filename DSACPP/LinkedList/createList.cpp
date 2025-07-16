#include<iostream>

using namespace std;

class node{
    public:
    int val;
    node* next;
    node(int ele){
        val=ele;
        next=NULL;
    }
};

class list{
     node* root;

     public:
     list(){
        root=NULL;
     }

     void addFirst(int ele){
           
           if(root==NULL){
            root= new node(ele);
            return;
           }
           node* newnode= new node(ele);
           newnode->next=root;
           root=newnode;
           
     }

     void show(){

        node* temp=root;
          cout<<"show\n";
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
     }
};

int main(){
    list ls;
    ls.addFirst(9);
    ls.addFirst(89);
    ls.show();
    cout<<"\nend";
}