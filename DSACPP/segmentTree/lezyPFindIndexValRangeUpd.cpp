#include<iostream>


using namespace std;


class Lezy{
       
    int *lz;
    int size;
    void _Build(int arr[],int node,int st,int en){
       
         if(st==en){
            lz[node]=arr[st];
            return;
         }

        int mid=st+(en-st)/2;
        _Build(arr,node*2+1,st,mid);
        _Build(arr,node*2+2,mid+1,en);
        lz[node]=0;
    }   
    int _Query(int idx,int st,int en,int node){
          
        if(st==en)
        return lz[node];

        int mid=st+(en-st)/2;
        if(lz[node]!=0){
            lz[node*2+1]+=lz[node];
            lz[node*2+2]+=lz[node];
            lz[node]=0;
        }
        if(mid>=idx)
          return _Query(idx,st,mid,node*2+1);
        else 
           return _Query(idx,mid+1,en,node*2+2);  

    }
    void _Update(int l,int r,int value,int st,int en,int node){
          // cout<<"in update funtion\n";
        if(st==en){
            lz[node]+=value;
            return;
        }
        if(st>=l && r>=en){
         lz[node]+=value;
         return;
        }
        int mid=st+(en-st)/2;
        _Update(l,r,value,st,mid,node*2+1);
        _Update(l,r,value,mid+1,en,node*2+2);

    }
    public:
    Lezy(int n){
        size=n;
        lz=new int[n*4];
    }

    void Build(int arr[]){
        _Build(arr,0,0,size-1);
    }
    int Query(int idx){
      return _Query(idx,0,size-1,0);
    }
    void Update(int l,int r,int value){
        _Update(l,r,value,0,size-1,0);
    }

};

int main(){


    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   Lezy l= Lezy(n);
   l.Build(arr);
    cin>>n;

    while(n--){
        int idx;
        cin>>idx;
      cout<<l.Query(idx);
      cout<<endl;
    }

    l.Update(0,4,-1);
    cout<<"updated ";

     cin>>n;

    while(n--){
        int idx;
        cin>>idx;
      cout<<l.Query(idx);
    }
   
    l.Update(0,0,7);
    cout<<l.Query(0);
}