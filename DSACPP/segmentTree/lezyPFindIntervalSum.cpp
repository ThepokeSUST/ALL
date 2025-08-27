#include <iostream>

using namespace std;

class Lezy
{

    int *lz;
    int size;
    int *vec;

    void _build(int arr[], int node, int st, int en)
    {

        if (st == en)
        {
            vec[node] = arr[st];
            lz[node]=0;
            return;
        }

        int mid = st + (en - st) / 2;
        _build(arr, node * 2 + 1, st, mid);
        _build(arr, node * 2 + 2, mid + 1, en);
        vec[node] = vec[node * 2 + 1] + vec[node * 2 + 2];
        lz[node]=0;
    }
    void propagate(int node, int st, int en)
    {
        if (st == en)
        {
            vec[node] += lz[node];
            lz[node] = 0;
        }
        else if (lz[node] != 0)
        {
            vec[node] += (lz[node] * (en - st + 1));
            lz[node * 2 + 1] += lz[node];
            lz[node * 2 + 2] += lz[node];
            lz[node] = 0;
        }
    }
    int _query( int node, int st, int en, int l, int r)
    {

        //  l st en r
        propagate(node, st, en);
        if (l > en || r < st)
            return 0;
        if (st == en)
            return vec[node];

        if (l <= st && en <= r)
            return vec[node];

        int mid=st+(en-st)/2;
        int left=_query(node*2+1,st,mid,l,r);
        int right=_query(node*2+2,mid+1,en,l,r);
      //  vec[node]=vec[node*2+1]+vec[node*2+2];
        return left+right;
    }
    void _update(int l,int r,int value,int node,int st,int en){
                 propagate(node,st,en);   
        if(r<st || l>en)
           return;
     
        if(l<=st && en<=r){
            lz[node]+=value;
            propagate(node,st,en);
            return;
        }   

        int mid=st+(en-st)/2;
        _update(l,r,value,node*2+1,st,mid);
        _update(l,r,value,node*2+2,mid+1,en);

        vec[node]=vec[node*2+1]+vec[node*2+2];

    }

public:
    Lezy(int n)
    {
        size = n;
        lz = new int[n * 4];
        vec = new int[n * 4]();
    }

    void Build(int arr[])
    {
        _build(arr, 0, 0, size - 1);
    }
    int query(int l,int r){
        return _query(0,0,size-1,l,r);
    }
    void update(int l,int r,int val){
        _update(l,r,val,0,0,size-1);
    }
};

int main()
{
    int n;
    cin >> n;
    int m=n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
        Lezy l= Lezy(n);
        l.Build(arr);
    // int n;
    cin>>n;
    while (n--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        cout<<l.query(a,b);
        cout<<endl;
    }
    l.update(0,3,2);
    l.update(1,2,3);       
    cout<<"updated\n";
     cin>>n;
    while (n--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        cout<<l.query(a,b);
        cout<<endl;
    }

}