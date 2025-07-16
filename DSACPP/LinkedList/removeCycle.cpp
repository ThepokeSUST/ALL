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

    void makeCycle(int idx){
        idx--;
        node* temp=root;
        while(idx--){
            temp=temp->next;
        }

        tail->next= temp;
    }

    void removeCycle(){
        node* fast=root;
        node* slow=root;
        
        while(fast && fast->next){
         //   cout<<"while1\n";
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
              break;
        }
       
        slow=root;

        while(slow!=fast){
          //  cout<<"while2\n";
            slow=slow->next;
            fast=fast->next;
        }
       //cout<<(slow==fast)<<endl;
        while(fast->next!=slow){
            // cout<<"while3\n";
            fast=fast->next;
        }
        fast->next=NULL;
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
    cout<<ls.Cycle();
    cout<<endl;
    ls.makeCycle(6);
    // ls.show();
    cout<<ls.Cycle();
    ls.removeCycle();
    ls.show();
 
}