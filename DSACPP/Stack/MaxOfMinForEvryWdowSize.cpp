
// //(n)^3
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> solution(vector<int> &vec){
//        int n=vec.size();
//        vector<int> ans(n,0);
//     for(int i=0;i<n;i++){
//          int Min=-1;
//         for(int j=0;j<n-i;j++){
//             int minele=vec[j];
//              for(int k=j+1;k<=j+i;k++){
//                 if(minele>vec[k])
//                  minele= vec[k];
//              }
//              Min=max(Min,minele);
//         }
//         ans[i]= Min;
//     }
//     return ans;
// }
// int main(){
       

//     int n;
//     cin>>n;

//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//     cin>>vec[i];
//     }

//     vector<int> ans= solution(vec);
//     for(int ele: ans) cout<<ele<<" ";



// }

//(n) solution

 #include<iostream>
 #include<vector>
 #include<stack>
 using namespace std;
  

 vector<int> solution(vector<int> &vec){
     vector<int> ans(vec.size(),0);
    stack< pair<int,int>> st;
    for(int i=0;i<vec.size();i++){
             
        while(!st.empty() && vec[i]<st.top().second){
              
               int idx= st.top().first;
               st.pop();
               if(st.empty()){
                  ans[i-1]=max(ans[i-1], vec[idx]);
               }
               else{
                int newidx= i-st.top().first -1;
                ans[newidx-1]= max(ans[newidx-1],vec[idx]);
               }
        }
        st.push({i,vec[i]});
    }


    while(!st.empty()){
          
        int idx= st.top().first;
        st.pop();
        if(st.empty()){
            ans[vec.size()-1]= max(ans[vec.size()-1],vec[idx]);
        }
        else{
            ans[vec.size()-st.top().first-1 -1]= max(ans[vec.size()-st.top().first-1 -1],vec[idx]);
        }
    }
   
    for(int i= ans.size()-2;i>=0;i--){
      ans[i]= max(ans[i],ans[i+1]);
    }
 return ans;

 }

 int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];

    vector<int> ans= solution(vec);
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
 }

//hw reverse version of this problem 