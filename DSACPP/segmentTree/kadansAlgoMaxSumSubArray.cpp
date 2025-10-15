#include<bits\stdc++.h>

using namespace std;


int kadans(vector<int> &vec){
    int ans=vec[0];
    int sum=0;
    for(int i=0;i<vec.size();i++){
          sum+=vec[i];
          ans=max(ans,sum);
          if(sum<0)
            sum=0;
    }
    return ans;
}

int main(){
      int n;
      cin>>n;

      vector<int> vec(n);

      for(int i=0;i<n;i++){
        cin>>vec[i];
      }
      cout<<kadans(vec);
}