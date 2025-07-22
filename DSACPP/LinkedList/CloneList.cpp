#include<iostream>
#include<vector>
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


int find(node* root,node* target){
    int cnt=0;
    while(root!=target){
      root=root->next;
      cnt++;
    }
    return cnt;
}
node* cloneList(node* root){
         
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
        temp=temp->next;
    }
    
    temp=root;
    node* temp2=root2;
    while(temp2){
         
        node* newrdm=temp->random;

        if(newrdm){
                
              node* tmp1=root;
              node* tmp2=root2;
              while(tmp1!=newrdm){
                tmp1=tmp1->next;
                tmp2=tmp2->next;
              }

          temp2->random=tmp2;
        //   int cnt= find(root,newrdm);
        //   newrdm=root2;
        //  // cout<<cnt<<endl;
        //   while(cnt--){
        //   newrdm=newrdm->next;
        //   }

        //   temp2->random=newrdm;
        }
       temp2=temp2->next;
       temp=temp->next;
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