#include <iostream>

using namespace std;

class node
{
public:
    // for both
    // capital and small
    node *a[52];
    bool end = false;
    node()
    {
        for (int i = 0; i < 52; i++)
            a[i] = NULL;
    }
};

class Trie
{
    node *root;

    void _insert(node *root, string str, int st, int en)
    {
        int idx;
        if(str[st]>=65 && str[st]<=91)
            idx = str[st] - 65;
        else
           idx= str[st]-97;    
        if (st == en-1)
        {
            root->a[idx] = new node();
            root->a[idx]->end = true;
            return;
        }
        node *temp;
        if (root->a[idx] == NULL)
        {
            temp = new node();
            root->a[idx] = temp;
        }
        else
            temp = root->a[idx];
        _insert(temp, str, st + 1, en);
    }
    bool _check(node *root, string str, int st, int en)
    {
         int idx;
        if(str[st]>=65 && str[st]<=91)
            idx = str[st] - 65;
        else
           idx= str[st]-97; 
        if (st == en-1)
        {
            if(root->a[idx]==NULL)
              return false;
            else
               return root->a[idx]->end;   
        }

        if(root->a[idx]==NULL)
            return false;
        else
          return _check(root->a[idx],str,st+1,en);    
    }
    void _dltwrd(node* root,string str,int st,int en){
             
     //   int idx=root->a[0]
      int idx;
        if(str[st]>=65 && str[st]<=91)
            idx = str[st] - 65;
        else
           idx= str[st]-97;
           
        if(st==en-1){
            root->a[idx]->end=false;
            return;
        }   

        _dltwrd(root->a[idx],str,st+1,en);
    }
public:
    Trie()
    {
        root = new node();
    }

    void insert(string str)
    {
        _insert(root, str, 0, str.size());
    }
    bool check(string str)
    {
        return _check(root, str, 0, str.size());
    }
    void deleteWord(string str){
        _dltwrd(root,str,0,str.size());
    }
};
int main()
{
    
    Trie T;
    int op;
    cin>>op;
    while(op>=0){
        if(op==0){
            string str;
            cout<<"Enter yourstring that you want to insert ";
            cin>>str;
            T.insert(str);
        }
        else if(op==1){
              string str;
            cout<<"Enter your string that you want to search ";
            cin>>str;
            cout<<T.check(str)<<endl;
        }
        else if(op==2){
            string str;
            cout<<"enter string that you want to delete ";
            cin>>str;
            T.deleteWord(str);
        }

        cin>>op;
    }
}