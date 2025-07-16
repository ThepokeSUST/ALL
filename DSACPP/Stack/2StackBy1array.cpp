#include<iostream>
#include<vector>
using namespace std;



class st{
    int size;
    int first;
    int second;
    vector<int> stk;

    public:
    st(int s){
        size=s;
        first=-1;
        second=size;
        stk.resize(size);
    }

    void pushFirst(int ele){
        if(first+1==second){
            cout<<"Not possible\n";
            return;
        }
        first++;
        stk[first]=ele;
    }

    void pushSecond(int ele){
          
        if(second-1==first){
            cout<<"not possible\n";
            return;
        }
        second--;
        stk[second]=ele;
    }

    int topFirst(){
        if(first==-1){
            return -1;
        }
        return stk[first];
    }
    int topSecond(){
        if(second==size)
        return -1;

        return stk[second];
    }

    int popFirst(){
        if(first==-1) return -1;

        first--;
        return stk[first+1];
    }
    int popSecond(){
        if(second==size) return -1;

        second++;
        return stk[second-1];
    }


};
int main(){
      st s(5);
      s.pushFirst(9);
      s.pushSecond(89);
      s.pushSecond(8);
      s.pushFirst(78);
      s.pushFirst(87);
      s.pushFirst(56);
      while(s.topFirst()!=-1){
        cout<<s.topFirst()<<endl;;
        s.popFirst();
      }
      cout<<endl;

      while(s.topSecond()!=-1){
        cout<<s.topSecond()<<endl;;
        s.popSecond();
      }

}