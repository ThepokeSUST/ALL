#include<bits\stdc++.h>


using namespace std;


class ST{
     int n;
     int* arr;

     public:
       ST(int n){
        this->n=n;
        arr=new int[4*n];
       }
       int findCross(vector<int> &vec,int st,int mid,int en){
               int l=vec[mid];

               for(int i=mid-1;i>=st;i--){
                if(l< l+vec[i])
                   break;
                else l=l+vec[i];   
               }

               int r=vec[mid+1];
               for(int i=mid+2;i<=en;i++){
                if(r< r+vec[i])
                    break;
                else r=r+vec[i];    
               }

               return l+r;
       }

       void build(vector<int> &vec,int st,int en,int node){
           

          if(st==en){
            arr[node]=vec[st];
            return;
          }
          int mid=st+(en-st)/2;
          build(vec,st,mid,node*2+1);
          int left=arr[node*2+1];
          build(vec,mid+1,en,node*2+2);
          int right=arr[node*2+2];
          int cross=findCross(vec,st,mid,en);
          arr[node]=max(left,max(right,cross));
       
       }

       int query(int st,int en,int l,int r ,int node,vector<int> &vec){
          
        if(l>en || r<st) return INT_MIN;
        if(l<=st && en<=r) return arr[node];

        int mid=st+(en-st)/2;
        int left= query(st,mid,l,r,node*2+1,vec);
        int right= query(mid+1,en,l,r,node*2+2,vec);
        int cross=findCross(vec,st,mid,en);
        return max(left,max(right,cross));
       }
};

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin>>vec[i];

    ST st= ST(n);
    st.build(vec,0,n-1,0);

    for(int i=0;i<5;i++){
        cout<<"for query ";
        int a,b;
        cin>>a>>b;
        cout<<st.query(0,n-1,a,b,0,vec)<<endl;
    }
}


//-2,1,-3,4,-1,2,1,-5,4