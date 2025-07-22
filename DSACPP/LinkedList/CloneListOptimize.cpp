#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class node{
     public:
         int val;
         node* next;
         node* random;

       node(int ele){
        val=ele;
        next=random=NULL;
       }  

};


node* cloneList(node* root){
         
    unordered_map<node*,node*> mp;
    node* root2=NULL;
    node* tail=NULL;
    node* temp=root;
    while(temp){
         
        if(!root2){
            root2=tail=new node(temp->val);
        }
        else{
            tail->next=new node(temp->val);
            tail=tail->next;
        }

        mp[temp]=tail;
        temp=temp->next;
    }
    
     temp=root;
     node* temp2=root2;

    while(temp){
           
        if(temp->random){
              temp2->random= mp[temp->random];
        }
        temp=temp->next;
        temp2=temp2->next;
    }
  return root2;
}

         
void show(node* root){
      

    while(root){
          
        cout<<root->val<<"\\";
        if(root->random){
            cout<<root->random->val<<" ->";
        }
       root=root->next;
    }

}
int main(){
      
      node* root=NULL;
      node* tail=NULL;
      root=tail = new node(1);
      vector<node*> ref;
      ref.push_back(root);
      tail->next=new node(2);
      tail=tail->next;
      ref.push_back(tail);
      tail->random=ref[0];
      tail->next=new node(3);
      tail=tail->next;
      ref.push_back(tail);
      ref[0]->random=tail;

      tail->next=new node(4);
      tail=tail->next;
      ref.push_back(tail);
      tail->random=ref[2];

      tail->next=new node(5);
      tail=tail->next;
      ref.push_back(tail);
      ref[2]->random=ref[4];
      ref[4]->random=ref[1];

     show(root);
     node* cloneRt=cloneList(root);
     cout<<endl;
      show(cloneRt);



}