#include<iostream>
#include<vector>
using namespace std;



class SegmentTree{
        int *seg;
        int size;
        
        void _update(int idx,int value,int st,int en,int node){
             
            if(st==en){
                seg[node]=value;
                return;
            }

            int mid=st+(en-st)/2;
            if(mid>=idx)
               _update(idx,value,st,mid,node*2+1);
            else{
                _update(idx,value,mid+1,en,node*2+2);
            }
            seg[node]=max(seg[node*2+1],seg[node*2+2]);   
                
        }
        public:
        SegmentTree(int n){
            seg=new int[4*n];
            size=n;
            // for(int i=0;i<n;i++)
            //  cout<<seg[i]<<" ";
        }
        void  create(vector<int> &vec,int st,int en,int idx){
            
            if(st==en)
            {
                seg[idx]=vec[st];
                return;
            }
               
            int mid=st+(en-st)/2;
            create(vec,st,mid,idx*2+1);
            create(vec,mid+1,en,idx*2+2);
             seg[idx]=max(seg[idx*2+1],seg[idx*2+2]);
        }
       
       int query(int idx,int st,int en,int l,int r){
          //l st   en r
          if(st>=l && r>=en)
           return seg[idx];
           // l r st en or st en l r
          if(st>r || en<l)
              return 0;
          
            int mid=st+(en-st)/2;
           int left=query(idx*2+1,st,mid,l,r);
           int right=query(idx*2+2,mid+1,en,l,r);
           
           return max(left,right);
       } 
      void update(int idx,int value){

        if(idx<0 || idx>=size)
          return;
        _update(idx,value,0,size-1,0);
      }
};

int main(){
    cout<<"hello";
    
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];

    SegmentTree s =SegmentTree(n);
    s.create(vec,0,n-1,0);
    cout<<"number of query ";
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<s.query(0,0,vec.size()-1,a,b)<<endl;
    }
    
    s.update(0,60);
    s.update(vec.size()-1,999);
    cout<<"updated\n";
    cout<<"number of query ";
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<s.query(0,0,vec.size()-1,a,b)<<endl;
    }

}