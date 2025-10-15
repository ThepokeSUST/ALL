#include<iostream>
#include<vector>


using  namespace std;


class node{
     node* arr[26];
     bool isEnd;
     public:
     node(){
        for(int i=0;i<26;i++)
            arr[i]=NULL;
        isEnd=false;    
     }
     void setEnd(){
        this->isEnd=true;
     }
     void resetEnd(){
        this->isEnd=false;
     }
     bool chkEnd(){
        return this->isEnd;
     }
     node* getnode(int idx){
        return arr[idx];
     }
     void setNode(int idx,node* newnode){
        arr[idx]=newnode;
     }
};

class Trie{
      node* root;
      public:
      Trie(){
        root=new node();
      }

      void insert(string str){
        int n=str.size();

        node* temp=root;
        for(int i=0;i<n;i++){
              
            int idx=str[i]-'a';
            if(temp->getnode(idx)==NULL){
                node* newnode=new node();
                temp->setNode(idx,newnode);
            }
            temp=temp->getnode(idx);
        }
        temp->setEnd();
      }
      bool isExist(string str){
        int n=str.size();

        node* temp=root;

        for(int i=0;i<n;i++){
              
            int idx=str[i]-'a';
            if(temp->getnode(idx)==NULL) return false;
            temp=temp->getnode(idx);
        }
        return temp->chkEnd();
      }

};
int main(){
      
    cout<<"how many words you have?";
    int n;
    cin>>n;
    Trie T=Trie();
    while(n--){
      string str;
      cin>>str;
      T.insert(str);
    }

    cout<<"Query number ";
    cin>>n;
    while(n--){
        // cin.ignore();
        string str;
        cin>>str;
        if(!T.isExist(str))
        cout<<"the word "<<str<<" not found\n";
    }
}