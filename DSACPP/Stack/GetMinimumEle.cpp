#include<iostream>
#include<stack>

using namespace std;


class MinStack{
      stack< pair<int,int>> st;
    public:
      void push(int val){
        if(st.empty()){
         st.push({val,val});
        }
        else{
            st.push({val, min(val,st.top().second)});
        }
      }

      void pop(){
        st.pop();
      }

      int top(){
        return st.top().first;
      }
      int getMin(){
         return st.top().second;
      }


};
int main(){
      
    stack<int> st;
    
    cout<< sizeof(int);
    cout<<endl;
    cout<<sizeof(long long);
    
    cout<<endl<<INT32_MAX<<endl;
    int intmax= INT32_MAX;
    cout<<intmax;
    cout<<endl;
    intmax++;
    cout<<intmax;

}