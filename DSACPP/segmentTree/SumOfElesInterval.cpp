#include<iostream>

 
using namespace std;


class SegmentSum{
       int size;
       int *seg;

      void _Build(int arr[],int node,int st,int en){
          
          if(st==en){
            seg[node]=arr[st];
            return;
          }
           int mid= st+(en-st)/2;

           _Build(arr,node*2+1,st,mid);
           _Build(arr,node*2+2,mid+1,en);
           seg[node]=seg[node*2+1]+seg[node*2+2];
      }
      void _Update(int idx,int value,int node,int st,int en){
           
        if(st==en){
            seg[node]=value;
            return;
        }

        int mid=st+(en-st)/2;
        if(mid>=idx)
            _Update(idx,value,node*2+1,st,mid);
        else  
           _Update(idx,value,node*2+2,mid+1,en);
        seg[node]=seg[node*2+1]+seg[node*2+2];       
      }

      int _Query(int l,int r,int st,int en,int node){
           
        if(l>en || r<st)
           return 0;
        if(l<=st && en<=r)
           return seg[node];


        int mid= st+(en-st)/2;

        int left= _Query(l,r,st,mid,node*2+1);
        int right= _Query(l,r,mid+1,en,node*2+2);
        return left+right;

      }
       public:
        SegmentSum(int n){
            size=n;
            seg=new int[n*4];
        }

        void Build(int arr[]){
            _Build(arr,0,0,size-1);
        }
        void Update(int idx,int value){
            _Update( idx, value,0,0,size-1);
        }
        int Query(int l,int r){
            return _Query(l,r,0,size-1,0);
        }
};


int main(){

       int n;
       cin>>n;

       int arr[n];
       for(int i=0;i<n;i++)
          cin>>arr[i];
    SegmentSum s=SegmentSum(n);
    s.Build(arr);

    cout<<"number of query: ";
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<s.Query(a,b)<<endl;
    }
    s.Update(0,8);
    s.Update(2,909);

    cout<<"number of query: ";
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<s.Query(a,b)<<endl;
    }

}

