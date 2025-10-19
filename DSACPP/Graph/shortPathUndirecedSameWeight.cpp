#include<bits\stdc++.h>

using namespace std;
map<int,char> mp;
map<char,int> rmp;

void BFS(vector<vector<int>> &adj,int st,vector<int> &dis,int des,vector<int> &visit){
      
       queue<int> q;
       q.push(st);
       visit[st]=1;
       dis[st]=0;

       while(!q.empty()){
            
        int node=q.front();
        q.pop();

        for(int i=0;i<adj[node].size();i++){
             
            int newnode=adj[node][i];
            if(!visit[newnode]){
              visit[newnode]=1;
              q.push(newnode);
              dis[newnode]=1+dis[node];
            }
        }
       }

       
}
int shortestPath(vector< vector<int> > &adj,int st,int des){
        
     int n=adj.size();
     vector<int> visit(n,0);
     vector<int> dis(n,INT_MAX);
     BFS(adj,st,dis,des,visit);
     return dis[des];
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
    int st,en;
    string str;
    cin>>str;
    st=mp[str[0]];
    en=mp[str[1]];
    //cin>>st>>en;
    cout<<shortestPath(adj,st,en);

}