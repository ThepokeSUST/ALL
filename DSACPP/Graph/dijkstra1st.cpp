#include<bits\stdc++.h>


using namespace std;
map<int,char> rmp;
map<char,int> mp;


vector<int>  disjkstra(vector<vector<int>> adj[],int v,int s){
      
      vector<int> explored(v,0);
      vector<int> dis(v,INT_MAX);
      dis[s]=0;
      


     for(int j=0;j<v;j++){
         int node=-1;
      int Min=INT_MAX;
      for(int i=0;i<v;i++){
          if(!explored[i] && Min>dis[i]){
              Min=dis[i];
              node=i;
          }
      }

      //if(idx)
        if(node==-1)
           break;
      explored[node]=1;
       for(int i=0;i<adj[node].size();i++){
            
             int newnode=adj[node][i][0];
             int W=adj[node][i][1];
             if(explored[newnode])
                continue;
             if(dis[newnode]> W+dis[node]){
                dis[newnode]=W+dis[node];
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