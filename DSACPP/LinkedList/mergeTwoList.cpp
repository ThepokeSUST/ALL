#include <iostream>

using namespace std;

class node
{

public:
    int val;
    node *next;

    node(int ele)
    {
        val = ele;
        next = NULL;
    }
};

class list
{
    node *root;
    node *tail;

public:
    list()
    {
        root = NULL;
        tail = NULL;
    }

    void addFirst(int ele)
    {
        if (!root)
        {
            root = new node(ele);
            tail = root;
            return;
        }

        node *temp = new node(ele);
        temp->next = root;
        root = temp;
    }

    void addLast(int ele)
    {
        if (tail == NULL)
        {
            tail = new node(ele);
            root = tail;
            return;
        }
        tail->next = new node(ele);
        tail = tail->next;
    }
    void show()
    {
        cout << "SHow function\n";
        node *temp = root;
        while (temp)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
        // cout<<"end show";
        }

     static node* merge(node* root,node* rt){
         node* root1=root;
         node* root2=rt;
         node* newroot=NULL;
         node* tail=NULL;

         while(root1 && root2){
              //cout<<"while\n";
            if(root1->val<root2->val){
                   if(!newroot){
                    newroot=tail=root1;
                    root1=root1->next;
                    tail->next=NULL;
                   }
                   else{
                    tail->next=root1;
                    root1=root1->next;
                    tail=tail->next;
                    tail->next=NULL;
                   }
            }
            else{
                //root1->val>=root2->val
                if(!newroot){
                  newroot=tail=root2;
                  root2=root2->next;
                  tail->next=NULL;
                }
                else{
                  tail->next=root2;
                  root2=root2->next;
                  tail=tail->next;
                  tail->next=NULL;
                }
            }
         }

         if(root1){
            tail->next=root1;
         }
         else tail->next=root2;

         return newroot;
     }
    void setRoot(node* rt){
     root=rt;
    }
    node* getRoot(){
        return root;
    }
   
};
int main()
{
    list ls;
    ls.addLast(9);
    ls.addLast(10);
    ls.addLast(56);
    ls.addLast(97);
    
    list ls2;
    ls2.addLast(8);
    ls2.addLast(23);
    ls2.addLast(56);

   
    list mergels;
    mergels.setRoot(ls.merge(ls.getRoot(),ls2.getRoot()));

    mergels.show();
}