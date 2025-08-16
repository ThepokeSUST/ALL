#include<iostream>
#include<vector>
using namespace std;



class SegmentTree{
        int *seg;


        public:
        SegmentTree(int n){
            seg=new int[4*n];
            // for(int i=0;i<n;i++)
            //  cout<<seg[i]<<" ";
        }
        int  create(vector<int> &vec,int st,int en,int idx){
            
            if(st==en)
            {
                seg[idx]=vec[st];
                return seg[idx];
            }
               
            int mid=st+(en-st)/2;
            int left=create(vec,st,mid,idx*2+1);
            int right=create(vec,mid+1,en,idx*2+2);
           return  seg[idx]=max(left,right);
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
}