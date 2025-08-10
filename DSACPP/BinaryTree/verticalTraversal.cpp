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

vector<int> verticalTraverse(node* root){
    vector<int> ans;
    if(!root) return ans;
    int l=0;
    int r=0;
    find(root,0,l,r);
    // cout<<l<<" "<<r<<endl;
    int size=r-l+1;
    // cout<<size;
    vector< vector<int> > vec(size);

    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty()){

        node* temp=q.front().first;
        int idx=q.front().second;
        q.pop();
        vec[idx+abs(l)].push_back(temp->val);
  
        if(temp->left)
             {  //cout<<temp->val<<" "<<idx-1<<endl;
                q.push({temp->left,idx-1});
             }
        if(temp->right)
            q.push({temp->right,idx+1});    
    }
   
    for(int i=0;i<size;i++){
        for(int j=0;j<vec[i].size();j++){
           // cout<<vec[i][j]<<" ";
            ans.push_back(vec[i][j]);
        }
       // cout<<endl;
    }
   return ans;
}
int main(){
  node* root=create();
  show(root);
  cout<<endl;
  vector<int> ans=verticalTraverse(root);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  
}

