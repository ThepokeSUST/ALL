#include<iostream>
#include<queue>
#include<vector>
#include <algorithm>
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
    
    if(ele == -1)
       return NULL;
    node* root=new node(ele);
    root->left=create();
    root->right=create();
    return root;   
}

void show(node* rt){
    if(!rt)
      return;
    cout<<rt->val<<"->";
    show(rt->left);
    show(rt->right);  
}
void find(node* root,int pos,int &l,int &r){
      if(root==NULL)
          return;
      l=min(l,pos);
      r=max(r,pos);
      find(root->left,pos-1,l,r);
      find(root->right,pos+1,l,r);    
}
vector<int> topView(node* root){
     
     int l=0;
     int r=0;
     find(root,0,l,r);
     vector<int> ans((r+abs(l)+1));
     vector<int> visit((r+abs(l)+1),0);

     queue< pair<node*,int> > q;
     q.push({root,0});
     l=abs(l);
     while(!q.empty()){
          pair<node*,int> temp=q.front();
          q.pop();
          if(!visit[temp.second+l]){
            ans[temp.second+l]=temp.first->val;
            visit[temp.second+l]=1;
          }
          if(temp.first->left)
          q.push({temp.first->left,temp.second-1});
          if(temp.first->right)
          q.push({temp.first->right,temp.second+1});
     }
 return ans;
}

int main(){
  node* root=create();
  show(root);
  vector<int> ans;
  ans=topView(root);
  cout<<endl;
  for(auto ele: ans){
    cout<<ele<<" ";
  }
  
}

