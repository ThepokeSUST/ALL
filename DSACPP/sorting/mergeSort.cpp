#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vec,int st,int mid,int en){
      
    int an=mid-st+1;
    int bn=en-mid;

    vector<int> arr(an),brr(bn);
    int j=0;
    for(int i=st;i<=mid;i++){
        arr[j++]=vec[i];
    }
    j=0;
    for(int i=mid+1;i<=en;i++){
        brr[j++]=vec[i];
    }

    j=0;
    int i=0;
    int idx=st;
    while(i<an && j<bn){
         if(arr[i]<brr[j])
            vec[idx++]=arr[i++];
         else 
            vec[idx++]=brr[j++];   
    }

    while(i<an){
        vec[idx++]=arr[i++];
    }
    while(j<bn){
        vec[idx++]=brr[j++];
    }
    
}

void MergeSort(vector<int> &vec,int st,int en){
     if(st==en) 
       return;
    int mid=st+(en-st)/2;
    MergeSort(vec,st,mid);
    MergeSort(vec,mid+1,en);
    merge(vec,st,mid,en);

}
int main(){
      int n;
      cin>>n;

      vector<int> vec(n);

      for(int i=0;i<n;i++) cin>>vec[i];

      MergeSort(vec,0,n-1);
      for(int i=0;i<n;i++)
         cout<<vec[i]<<" ";

}