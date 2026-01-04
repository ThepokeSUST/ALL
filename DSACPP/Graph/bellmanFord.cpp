#include<iostream>
#include<map>
#include<vector>
#include<climits>
using namespace std;


map<char,int> mp;
map<int,char> rmp;



void bellman(vector< vector<pair<int,int> >> adj,int v){

          vector<int> dis(v,INT_MAX);
          dis[0]=0;
         for(int i=0;i<v-1;i++){
                bool flag=false;
               for(int j=0;j<v;j++){
                    int node=j;
                    for(int k=0;k<adj[j].size();k++){
                         
                        int newnode=adj[j][k].first;
                        int w=adj[j][k].second;
                         if(dis[node]==INT_MAX)
                            continue;
                        if(dis[newnode]> dis[node]+w)
                        {
                            dis[newnode]=dis[node]+w;
                            flag=true;
                              
                        }

                    }
               }
               if(!flag){
                break;
               }
         };
           
            bool flag=false;
               for(int j=0;j<v;j++){
                    int node=j;
                    for(int k=0;k<adj[j].size();k++){
                         
                        int newnode=adj[j][k].first;
                        int w=adj[j][k].second;
                         if(dis[node]==INT_MAX)
                            continue;
                        if(dis[newnode]> dis[node]+w)
                        {
                            dis[newnode]=dis[node]+w;
                            flag=true;
                              
                        }

                    }
               }
               if(flag){
                 cout<<"negative edge detected";
                 return;
               }

               for(int ele: dis){
                cout<<ele<<" ";
               }


}
int main(){
     
      int v,e;
      cin>>v>>e;
       vector< vector<pair<int,int>>> adj(v);
       int idx=0;
      for(int i=0;i<e;i++){
        string str;
        cin>>str;
        int w;
        cin>>w;
        if(mp.find(str[0])==mp.end())
          {
              mp[str[0]]=idx++;
              rmp[mp[str[0]]]=str[0];
          }
        if(mp.find(str[1])==mp.end())
          {
            mp[str[1]]=idx++;
            rmp[mp[str[1]]]=str[1];
          }    

          adj[mp[str[0]]].push_back({mp[str[1]],w});


      }
     
      bellman(adj,v);

}