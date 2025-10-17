#include<bits\stdc++.h>


using namespace std;



class ST{
      
      int n;
      int* arr;
      int* propVal;
      bool* isLezy;
      
      void apply(int st,int en,int node,int val){
             if(st!=en){
               isLezy[node]=true;
               propVal[node]+=val;
             }
             arr[node]+=(en-st+1)*val;
      }
      void propragate(int st,int en,int node){
              if(!isLezy[node]) return;

              isLezy[node]=false;
              int mid=st+(en-st)/2;
              apply(st,mid,node*2+1,propVal[node]);
              apply(mid+1,en,node*2+2,propVal[node]);
              propVal[node]=0;
      }
      public:
      ST(int n){
        this->n=n;
        arr=new int[4*n];
        propVal=new int[4*n];
        isLezy=new bool[4*n];
      }


      void build(vector<int> &vec,int st,int en ,int node){
           
        if(st==en){
          arr[node]=vec[st];
          propVal[node]=0;
          isLezy[node]=false;
          return;
        }

        int mid=st+(en-st)/2;
        build(vec,st,mid,node*2+1);
        build(vec,mid+1,en,node*2+2);
        arr[node]=arr[node*2+1]+arr[node*2+2];
        propVal[node]=0;
        isLezy[node]=false;
      }

      int query(int st,int en,int l,int r,int node){
          
          if(st>r || en<l) return 0;
          if(st>=l && en<=r){//full overlap
               return arr[node];
          }
          
          int mid=st+(en-st)/2;

          propragate(st,en,node);
          int left=query(st,mid,l,r,node*2+1);
          int right=query(mid+1,en,l,r,node*2+2);

        return left+right;
          

      }

      void update(int st,int en,int l,int r,int node,int val){
            

        if(st>=l && en<=r){//full overlap
           apply(st,en,node,val);
           return;
        }
        if(st>r || en<l) return;

        propragate(st,en,node);
        int mid=st+(en-st)/2;
        update(st,mid,l,r,node*2+1,val);
        update(mid+1,en,l,r,node*2+2,val);
        arr[node]=arr[node*2+1]+arr[node*2+2];
      }




   
};
int main(){

    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin>>vec[i];


   


}