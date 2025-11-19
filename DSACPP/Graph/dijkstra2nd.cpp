#include<bits\stdc++.h>


using namespace std;
map<int,char> rmp;
map<char,int> mp;


vector<int>  disjkstra(vector<vector<int>> adj[],int v,int s){
      
    vector<int>  dis(v,INT_MAX);
    dis[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,s});
    vector<int> explored(v,0);
    while(!q.empty()){
          int node=q.top().second;
          int weight=q.top().first;
          q.pop();
            if(explored[node]) continue;
        //   explored[node]=1;
          explored[node]=1;
          for(int i=0;i<adj[node].size();i++){
               int newnode=adj[node][i][0];
               int w=adj[node][i][1];
                 if(explored[newnode]) continue;
               if(dis[newnode]> dis[node]+w){
                dis[newnode]=dis[node]+w;
                q.push({dis[newnode],newnode});
               }
                
          }
    }

    return dis;
     
}
int main(){
      

    int v,e;
    cin>>v>>e;
    int idx=0;
    vector< vector<int>> adj[v];
    
    for(int i=0;i<v;i++){
        mp[char('A'+i)]=i;
        rmp[i]=char('A'+i);
    }
    for(int i=0;i<e;i++)
    {
        vector<int> vec;
        string str;
        cin>>str;
        int w;
        cin>>w;
        // if(mp.find(str[0])==mp.end()){
        //     mp[str[0]]=idx;
        //     rmp[idx++]=str[0];
        // }
        // if(mp.find(str[1])==mp.end()){
        //     mp[str[1]]=idx;
        //     rmp[idx++]=str[1];
        // }
        vec.push_back(mp[str[0]]);
        vec.push_back(w);
        adj[mp[str[1]]].push_back(vec);
        vec.clear();
        vec.push_back(mp[str[1]]);
        vec.push_back(w);
        adj[mp[str[0]]].push_back(vec);
       
    }
    cout<<"adj complete\n";

    vector<int> ans=disjkstra(adj,v,0);

    for(int i=0;i<v;i++){
          
        cout<<rmp[0]<<" to "<<rmp[i]<<"distance "<<ans[i]<<endl;
    }

    
}