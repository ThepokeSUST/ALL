// #include<bits/stdc++.h>

// using namespace std;


// class node{
//     public:
//      vector<node*> arr;
     
//       node(){
//         arr.resize(26);
//          for(int i=0;i<26;i++)
//               arr[i]=NULL;
//           isend=false;
//       }
//      bool isend;
// };

// class Trie{
//        node* root;
       


//        bool _isExist(string str,node* rt){
               
//            if(str.size()==1){
//              if(rt->arr[str[0]-'a']==NULL) return false;
//              else{
//                 return rt->arr[str[0]-'a']->isend;
//              }
//            }


//            if(rt->arr[str[0]-'a']==NULL) return false;
//            else{
//               return _isExist(str.substr(1,str.size()),rt->arr[str[0]-'a']);
//            }
//        }
//        void _insert(string str,node* rt){
          
//         if(str.size()==1){
//             if(rt->arr[str[0]-'a']==NULL){
//                 rt->arr[str[0]-'a']=new node();
//                 rt->arr[str[0]-'a']->isend=true;
//             }
//             else{
//              rt->arr[str[0]-'a']->isend=true;
//             }
//             return;
//         }

//         if(rt->arr[str[0]-'a']==NULL){
//             rt->arr[str[0]-'a']=new node();
//             _insert(str.substr(1,str.size()),rt->arr[str[0]-'a']);
//         }
//         else{
//              _insert(str.substr(1,str.size()),rt->arr[str[0]-'a']);
//         }
//        }
//        public: 
//        Trie(){
//         root=new node();
//        }
//       void insert(string str){
//         _insert(str,root);
//       }

//        bool isExist(string str){
//             return _isExist(str,root);
//        }


// };

// int main(){
//     cout<<"start\n";
// //    node* a =new node[4];
// //     // a[0]=NULL;
// //     for(int i=0;i<4;i++)
// //     {
// //         // cout<<a[i]<<" ";
// //     }

//     //  int ar[4]={};
//     //  cout<<ar[1];
//     //  for(int i=0;i<4;i++) cout<<endl<<ar[i];
//     // cout<<endl;
//     //  int* arr=new int[5];
//     //  for(int i=0;i<5;i++)
//     //     cout<<arr[i]<<" ";

    
//     Trie t;
//     cout<<"insert words\n";
//     for(int i=0;i<4;i++){
//         string str;
//         cin>>str;
//         t.insert(str);
//     }
//     cout<<"now find inserted word\n";
//     for(int i=0;i<4;i++){
//         string str;
//         cin>>str;
//         cout<<t.isExist(str)<<endl;
//     }

// }






#include<bits/stdc++.h>

using namespace std;


class node{
    public:
     vector<node*> arr;
     
      node(){
        arr.resize(26);
         for(int i=0;i<26;i++)
              arr[i]=NULL;
          isend=false;
          pre=0;
      }
      int pre;
     bool isend;
};

class Trie{
       node* root;
       


       bool _isExist(string str,node* rt){
               
           if(str.size()==1){
             if(rt->arr[str[0]-'a']==NULL) return false;
             else{
                return rt->arr[str[0]-'a']->isend;
             }
           }


           if(rt->arr[str[0]-'a']==NULL) return false;
           else{
              return _isExist(str.substr(1,str.size()),rt->arr[str[0]-'a']);
           }
       }
       void _insert(string str,node* rt){
          
        if(str.size()==1){
            if(rt->arr[str[0]-'a']==NULL){
                rt->arr[str[0]-'a']=new node();
                rt->arr[str[0]-'a']->isend=true;
            }
            else{
             rt->arr[str[0]-'a']->isend=true;
            }
            
            return;
        }

        if(rt->arr[str[0]-'a']==NULL){
            rt->arr[str[0]-'a']=new node();
            _insert(str.substr(1,str.size()),rt->arr[str[0]-'a']);
        }
        else{
             _insert(str.substr(1,str.size()),rt->arr[str[0]-'a']);
        }
        rt->arr[str[0]-'a']->pre++;
       }
       public: 
       Trie(){
        root=new node();
       }
      void insert(string str){
        _insert(str,root);
      }

       bool isExist(string str){
            return _isExist(str,root);
       }


};

int main(){
    cout<<"start\n";
//    node* a =new node[4];
//     // a[0]=NULL;
//     for(int i=0;i<4;i++)
//     {
//         // cout<<a[i]<<" ";
//     }

    //  int ar[4]={};
    //  cout<<ar[1];
    //  for(int i=0;i<4;i++) cout<<endl<<ar[i];
    // cout<<endl;
    //  int* arr=new int[5];
    //  for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";

    
    Trie t;
    cout<<"insert words\n";
    for(int i=0;i<4;i++){
        string str;
        cin>>str;
        t.insert(str);
    }
    cout<<"now find inserted word\n";
    for(int i=0;i<4;i++){
        string str;
        cin>>str;
        cout<<t.isExist(str)<<endl;
    }

}