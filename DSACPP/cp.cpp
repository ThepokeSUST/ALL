

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Vector{
      
//     int ele;
//     int idx;

//     Vector(int i,int idx){
//         ele=i;
//         this->idx=idx;
//     }
// };
// class solution{
      
//     public: 
//        vector<int> solve(){
            
//             for(int i=0;i<vec.size();i++){
               
//                }

//             }

//        }
// };
// int main(){
      
//     solution s;
//     //vector<int> vec={1,4,2,56,43};
//    // s.solve(vec,8);
    
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int Find(vector<pair<int,int>> &vec,int st,int en,int ele,int i){
       
   if(st==en)
     {
        if(vec[st].first==ele && i!= vec[st].second) return vec[st].second;
        return -1;
     }
       
    int mid= st+(en-st)/2;
    if(vec[mid].first==ele && i!=vec[mid].second) return vec[mid].second;
    if(vec[mid].first>ele){
        return Find(vec,st,mid,ele,i);
    }

    else return Find(vec,mid+1,en,ele,i);
      
}

class solve{
    
    public:
     pair<int,int> solution( vector< pair<int,int> > &vec,int target){
                 
             int n= vec.size();
           vector<pair<int,int> > V=vec;
           sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            int  chck= target-V[i].first;
            int idx= Find(vec,0,n-1,chck,i);
            if(idx!=-1){
                cout<<i<<endl;
                return {i,idx};
            }
        }
          return {-1,-1};
     }

   
};
int main(){
     
  
    int n;
    cin>>n;
      vector<pair<int,int>> vec(n);

    for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       vec[i]={ele,i};
    }
    int target;
    cin>>target;
   // sort(vec.begin(),vec.end());
    solve s;
    pair<int,int> par=s.solution(vec,target);
    
    if(par.first!=-1){
      //  cout<<"eldke\n";
         cout<<"["<<par.first<<","<<par.second<<"]";
    }


}