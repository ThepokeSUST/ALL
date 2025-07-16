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


    void deleteKthFromEnd(int n){
          node* tempRoot=root;
          // cout<<"start\n";
          int count=0;

          while(tempRoot){
            count++;
            tempRoot=tempRoot->next;
          }
        count=count-n;
        tempRoot=root;
        node* pre=NULL;
        while(count--){
            pre=tempRoot;
           tempRoot=tempRoot->next;
        //   cout<<"while2 "<<count<<endl;
        }
        if(pre==NULL){
         //   cout<<"nUll\n";
            tempRoot=root->next;
            delete(root);
            root=tempRoot;
            return;
        }

        pre->next= tempRoot->next;
        delete(tempRoot);
      //  cout<<"end";
        return;
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
    ls.deleteKthFromEnd(1);
    ls.show();
}