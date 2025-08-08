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
vector<int> spiralOrder(node* rt){
    vector<int> ans;
    queue<node*> q;
    
    bool chk=false;
    q.push(rt);
    
    while(!q.empty()){
    int count=q.size();
    vector<int> ans2;
     while(count--){
     ans2.push_back(q.front()->val);
     node* temp=q.front();
     q.pop();
       if(temp->left)
          q.push(temp->left);
       if(temp->right)
            q.push(temp->right);   
     }
    if(!chk){
      reverse(ans2.begin(),ans2.end());
      
    }
    ans.insert(ans.end(),ans2.begin(),ans2.end());
    chk=!chk;

    }
    return ans;
}
int main(){
  node* root=create();
  show(root);
  vector<int> ans;
  ans=spiralOrder(root);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}

/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int> &vec){
    int n=vec.size();
    
    vector<int> ans(n,-1);
    stack<int> st;
    
    for(int i=0;i<n;i++){
       if(st.empty())
         st.push(i);
       else{
         while(!st.empty() && vec[st.top()]<vec[i]){
         ans[st.top()]=i;
         st.pop();
         }
         st.push(i);
       }   
    }
    return ans;
    
}
int main()
{
  //  cout << "Hello World!" << endl;
      int n;
      cin>>n;
      vector<int> vec(n);
      for(int i=0;i<n;i++) cin>>vec[i];
      vector<int> ans= nextGreater(vec);
      
      for(int a: ans)
      if(a<0)
        cout<<a<<" ";
      else  
        cout<<vec[a]<<" ";
)
*/