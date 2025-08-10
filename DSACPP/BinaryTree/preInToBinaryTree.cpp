// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
       int val;
       node* left;
       node* right;
       
       node(int ele){
            val=ele;
            left=right=NULL;
       }
};

node* create(){
     
     int ele;
     cin>>ele;
     
     if(ele==-1) return NULL;
     
     node* temp=new node(ele);
     temp->left=create();
     temp->right=create();
     
     return temp;
}

int position(vector<int> &in,int ele,int st,int en){
   for(int i=st;i<=en;i++){
    if(in[i]==ele)
      return i;
   }
}
node* buildTree(vector<int> &pre,vector<int> &in,int inst,int inen,int idx){
     
    if(inst>inen) return NULL;
      
    node* temp= new node(pre[idx]);
    int pos=position(in,pre[idx],inst,inen);
    temp->left= buildTree(pre,in,inst,pos-1,idx+1);
    temp->right= buildTree(pre,in,pos+1,inen,idx+(pos-inst)+1);
     
    return temp;
}

void preOr(node* rt){
    if(rt==NULL) return;
    cout<<rt->val<<" ";
    preOr(rt->left);
    preOr(rt->right);
}

int main() {
    int n;
    cin>>n;
    vector<int> pre(n);
    vector<int> in(n);

    for(int i=0;i<n;i++){
         cin>>pre[i];
    }
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    cout<<"pre and in input done\n";
    node* root=buildTree(pre,in,0,n-1,0);
    preOr(root);
    return 0;
}