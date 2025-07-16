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

    void removeEvryKth(int n){
           
        int count=0;
        node* temp=root;

        while(temp){
          count++;
          temp=temp->next;
        }
        temp=root;
        node* pre=NULL;
        count=1;

        while(temp){

            if(count==n){
                
                if(pre==NULL){
                    if(temp==root){
                        temp=temp->next;
                        delete(root);
                        root=temp;
                    }
                }
               else{
                  pre->next= temp->next;
                delete(temp);
                temp=pre->next;
               }
                count=1;
            }
            else{
                 pre=temp;
            temp=temp->next;
            count++;
            }
            
            
        }

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


};
int main(){
    list ls;
    ls.addFirst(9);
    ls.addLast(90);
    ls.addFirst(79);
    ls.addLast(56);
    ls.show();
    ls.removeEvryKth(2);
    ls.show();
  
}