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
node* merge(node*,node*);
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

    
    void setRoot(node* rt){
     root=rt;
    }
    node* getRoot(){
        return root;
    }
   
};

 

 void mergeSort(list arr[],int st,int en){
           if(st==en){
              return;
           }

    int mid= st+(en-st)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,en);
    node* temp=merge(arr[st].getRoot(),arr[mid+1].getRoot());
    arr[st].setRoot(temp);
 }

 node* merge(node* root,node* rt){
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


int main()
{
     
    list arr[4];
     
    arr[0].addLast(8);
    arr[0].addLast(9);
    arr[0].addLast(56);
    arr[0].addLast(89);

    arr[1].addLast(3);
    arr[1].addLast(4);
    arr[1].addLast(90);

    arr[2].addLast(0);
    arr[2].addLast(19);
    arr[2].addLast(55);

    arr[3].addLast(1);
    arr[3].addLast(4);
    arr[3].addLast(99);
    arr[3].addLast(100);
    
    
    mergeSort(arr,0,3);
    arr[0].show();
    
    
    
    
     
   
}