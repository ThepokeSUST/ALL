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

    node* reverseKth(int k, node *rt)
    {

        node *fst = rt;
        node *second = fst->next;
        node *cur = fst->next;
        node *pre = fst;

        while (k-- && cur)
        {
            node *front = cur->next;
            cur->next = pre;
            pre = cur;
            cur = front;
           // cout<<"while\n";
        }
        second->next = cur;
        fst->next = pre;
      //  cout<<"ok\n";
        return second;
    }

    void reverseGrp(int k)
    {
          node* newnode=new node(0);
          newnode->next=root;

          node* rt=newnode;
          while(rt->next){
            rt=reverseKth(k,rt);
          //  cout<<"while\n";
          }

          root=newnode->next;
          delete(newnode);
         // cout<<"end";
    }
};
int main()
{
    list ls;
    ls.addFirst(9);
    ls.addLast(90);
    ls.addFirst(79);
    ls.addLast(56);
    ls.addLast(77);
    ls.show();
    ls.reverseGrp(6);
    ls.show();
}