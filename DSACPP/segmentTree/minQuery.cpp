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
    
    void build(vector<int> &vec,int st,int en,int node){
        if(st==en){
           arr[node]=vec[st];
            return;
        }

        int mid= st+(en-st)/2;
          build(vec,st,mid,node*2+1);
          build(vec,mid+1,en,node*2+2);
         arr[node]= min(arr[node*2+1],arr[node*2+2]);
    }

    int query(int node,int l,int r,int st,int en){
         
        if(st>r || en<l) return INT_MAX;
        if(st==en) return arr[node];
        
        if(l<=st && en<= r) return arr[node];
        
        int mid= st+(en-st)/2;

        int left=query(node*2+1,l,r,st,mid);
        int right=query(node*2+2,l,r,mid+1,en);
        return min(left,right);
        
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
        cout<<"for query\n";
        int a,b;
        cin>>a>>b;
        cout<<"minimum between "<<a<<"and "<<b<<" "<<st.query(0,a,b,0,n-1);
        cout<<endl;
    }
}