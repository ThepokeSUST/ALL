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
    node* tail;
    public:
    list(){
        root=NULL;
        tail=NULL;
    }

    void addFirst(int ele){
        if(!root)
        {
            root=new node(ele);
            tail=root;
            return;
        }

        node* temp= new node(ele);
        temp->next=root;
        root=temp;
    }

    void addLast(int ele){
        if(tail==NULL){
            tail=new node(ele);
            root=tail;
            return;
        }
        tail->next= new node(ele);
        tail=tail->next;
    }

    void show(){
         cout<<"SHow function\n";
       node* temp=root;
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

    bool Cycle(){

        node* slow=root;
        node* fast=root;

        while(fast && fast->next){
              slow= slow->next;
              fast=fast->next->next;
              if(slow==fast) return true;
        }
        return false;
    }

    node*  getRoot(){
        return root;
    }
     int count(node* rt){
            if(rt==NULL) return 0;

            int cnt=0;

            while(rt){
                cnt++;
              rt=rt->next;
              
            }
            return cnt;
     }
    node* interSection(node* root2){
           node* root1=root;

         int ls1=count(root1);
         int ls2=count(root2);
       //assume ls1>=ls2
       int n=ls1-ls2;
       while (n--)
       {
        /* code */
        root1=root1->next;
       }

       while( root1 && root2 ){
           root1=root1->next;
           root2=root2->next;

           if(root1==root2) return root1;

       }

       return NULL;
    }
   
};
int main(){
    list ls;
    ls.addFirst(9);
    ls.addLast(90);
    ls.addFirst(79);
    ls.addLast(56);
    ls.addFirst(8);
    ls.addLast(45);
    ls.addLast(0);
    ls.addLast(34);
    ls.addLast(23);

    ls.show();

    list ls2;
    ls2.addFirst(9);
    ls2.addFirst(90);
      ls2.addFirst(89);
    
    ls2.addFirst(190);
    ls2.show();
    int n=4;
    node* list1=ls.getRoot();
     while(n--){
       list1=list1->next;
     }

   
     node* list2=ls2.getRoot();
     while(list2->next!=NULL){
        list2=list2->next;
     }
     list2->next=list1;
     ls2.show();
    // cout<<list1->val<<" "<<list2->val;
     
    node* inter=ls.interSection(ls2.getRoot());
    if(inter)
      cout<<inter->val<<endl;
    else cout<<-1;  
 
}