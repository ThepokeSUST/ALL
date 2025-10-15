#include<bits/stdc++.h>


using namespace std;
map<char,int> mp;
map<int,char> rmp;


bool BFS(vector< vector<int> > &adj,int v,int st,vector<int> &visit){
          queue<int> q;
          q.push(st);
          vector<int> par(v,-1);
          visit[st]=1;
          while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(int i=0;i<adj[cur].size();i++){
                int next=adj[cur][i];
                if(next==par[cur])
                  continue;
                if(!visit[next]){
                    visit[next]=1;
                    par[next]=cur;
                    q.push(next);
                }
                else return true;
            }
            
          }
          return false;
}
bool isCyclePresent(vector<vector<int> > &adj,int v){
       vector<int> visit(v,0);

       for(int i=0;i<v;i++){
        if(!visit[i] && BFS(adj,v,i,visit)){
         return true;
        }
       }
       return false;
}
int main(){
    int v,e;
    cin>>v>>e;
    
    vector<vector<int>> adj(v);
    int idx=0;
    for(int i=0;i<e;i++){
        string str;
        cin>>str;
        if(mp.find(str[0])==mp.end()){
              mp[str[0]]=idx++;
              rmp[idx-1]=str[0];
        }
        if(mp.find(str[1])==mp.end()){
            mp[str[1]]=idx++;
            rmp[idx-1]=str[1];
        }
        adj[mp[str[0]]].push_back(mp[str[1]]);
         adj[mp[str[1]]].push_back(mp[str[0]]);
    }
    cout<<"graph input finished"<<endl;
    cout<<isCyclePresent(adj,v);
}