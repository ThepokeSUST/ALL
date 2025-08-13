#include <iostream>

using namespace std;

class node
{
public:
    // for both
    // capital and small
    node *a[26];
    int wrdcnt;
    node()
    {   
        wrdcnt=0;
        for (int i = 0; i < 26; i++)
            a[i] = NULL;
    }
    void dicwrdcnt(){
        this->wrdcnt-=1;
    }
    void incwrdcnt(){
        this->wrdcnt+=1;
    }
};

class Trie
{
    node *root;
    
public:
    Trie()
    {
        root = new node();
    }

    void insert(string str)
    {  
        node* temp=root;

        for(int i=0;i<str.size();i++){
            int idx= str[i]-'A';
            if(temp->a[idx]==NULL){
                temp->a[idx]=new node();
            }
            temp=temp->a[idx];
        }
        temp->incwrdcnt();
    }
    int countWrd(string str)
    {
        node* temp=root;

        for(int i=0;i<str.size();i++){
            int idx= str[i]-'A';
            if(!temp->a[idx])
            return 0;

            temp=temp->a[idx];
        }
        return temp->wrdcnt;
    }
    void deleteWord(string str){
    
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
            cout<<"Enter your string that you want to count ";
            cin>>str;
            cout<<T.countWrd(str)<<endl;
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