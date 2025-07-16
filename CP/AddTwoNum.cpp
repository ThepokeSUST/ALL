// #include<iostream>
// #include<vector>

// using namespace std;

// class Node{

//     public:

//     int ele;
//     Node* next;
//     Node* pre;
//     Node(int e)
//     {
//         ele=e;
//         pre=next=NULL;

//     }
// };
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// struct ListNode{

//     public:

//     Node* root;
//     Node* tail;
//     ListNode(){
//         root=NULL;
//     }

//    void Add(int ele){
//       if(root==NULL)
//       {
//         tail=root= new Node(ele);
//       }
//       else{
//         Node* newnode=new  Node(ele);
//         newnode->next= root;
//         root->pre= newnode;
//         root=newnode;
//       }
//    }

//    void show(){

//     Node* temp=root;

//     while(temp!=NULL){
//           cout<<temp->ele<<"->";
//           temp=temp->next;
//     }
//     cout<<endl;
//    }

//    int giveNum(){
//       Node* temp= tail;
//       int num=0;

//       while(temp!=NULL){
//         num= num*10+temp->ele;
//         temp=temp->pre;
//       }
//       return num;
//    }
// };

// // class ListNode{

// //     public:

// //     Node* root;
// //     Node* tail;
// //     ListNode(){
// //         root=NULL;
// //     }

// //    void Add(int ele){
// //       if(root==NULL)
// //       {
// //         tail=root= new Node(ele);
// //       }
// //       else{
// //         Node* newnode=new  Node(ele);
// //         newnode->next= root;
// //         root->pre= newnode;
// //         root=newnode;
// //       }
// //    }
// //    void AddRe(int ele){
// //   if(root==NULL)
// //       {
// //         tail=root= new Node(ele);
// //       }
// //       else{
// //         Node* newnode=new  Node(ele);
// //         newnode->pre= tail;
// //         tail->next= newnode;
// //         tail=newnode;
// //       }
// //    }

// //    void show(){

// //     Node* temp=root;

// //     while(temp!=NULL){
// //           cout<<temp->ele<<"->";
// //           temp=temp->next;
// //     }
// //     cout<<endl;
// //    }

// //    int giveNum(){
// //       Node* temp= tail;
// //       int num=0;

// //       while(temp!=NULL){
// //         num= num*10+temp->ele;
// //         temp=temp->pre;
// //       }
// //       return num;
// //    }
// // };

// // class ListNode{

// //     public:

// //     Node* root;
// //     Node* tail;
// //     ListNode(){
// //         root=NULL;
// //     }

// //    void Add(int ele){
// //       if(root==NULL)
// //       {
// //         tail=root= new Node(ele);
// //       }
// //       else{
// //         Node* newnode=new  Node(ele);
// //         newnode->next= root;
// //         root->pre= newnode;
// //         root=newnode;
// //       }
// //    }
// //    void AddRe(int ele){
// //   if(root==NULL)
// //       {
// //         tail=root= new Node(ele);
// //       }
// //       else{
// //         Node* newnode=new  Node(ele);
// //         newnode->pre= tail;
// //         tail->next= newnode;
// //         tail=newnode;
// //       }
// //    }

// //    void show(){

// //     Node* temp=root;

// //     while(temp!=NULL){
// //           cout<<temp->ele<<"->";
// //           temp=temp->next;
// //     }
// //     cout<<endl;
// //    }

// //    int giveNum(){
// //       Node* temp= tail;
// //       int num=0;

// //       while(temp!=NULL){
// //         num= num*10+temp->ele;
// //         temp=temp->pre;
// //       }
// //       return num;
// //    }
// // };

// class solution{
//      public:
//      ListNode* addTwoNumbers(ListNode* ls,ListNode* ls2){
//             int num1= ls->giveNum();
//             int num2=ls2->giveNum();
//             int sum=num1+num2;
//           //  cout<<"sum = "<<sum<<endl;
//             ListNode* ls3= new ListNode();
//             vector<int> vec;
//             while(sum!=0){
//                 int ele = sum%10;
//                 sum = sum/10;
//                vec.push_back(ele);
//             }

//             for(int i=vec.size()-1;i>=0;i--){
//               ls3->Add(vec[i]);
//             }
//             return ls3;
//      }
// };

// int main(){
//        ListNode ls;

//        int n;
//        cin>>n;
//        for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         ls.Add(ele);
//        }
//       cin>>n;
//       ListNode ls2;
//       for(int i=0;i<n;i++){
//           int ele;
//           cin>>ele;
//           ls2.Add(ele);
//       }
//       //ls.show();
//       //cout<<endl;
//      // ls2.show();
//      // cout<<ls.giveNum()<<" "<<ls2.giveNum()<<endl;
//        solution s;
//       ListNode* ans=s.addTwoNumbers(&ls,&ls2);

//       //cout<<ans->giveNum();
//    ans->show();

// }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
#include <vector>

using namespace std;
//  struct ListNode
//  {
//    int val;
//    ListNode* next;
//    ListNode(): val(0),next(nullptr){}
//    ListNode(int x) :val(x),next(nullptr){}
//    ListNode(int x,ListNode* next):val(x),next(next){}

//  };

//  int giveNum(ListNode* root){
//       int num=0;
//       vector<int> vec;

//       while(root!=nullptr)
//       {
//         vec.push_back(root->val);
//         root= root->next;
//       }

//       for(int i=vec.size()-1;i>=0;i--){
//          num=num*10+ vec[i];
//       }
//     //  cout<<num<<endl;
//       return num;
//  }
//  class Solution{

//      public:
//      ListNode* addTwoNumber(ListNode* ls,ListNode* ls2){
//           int num1=giveNum(ls);
//           int num2=giveNum(ls2);
//           int sum= num1+num2;
//           vector<int> vec;
//       //    cout<<num1<<endl<<num2<<endl;
//     //       cout<<"sum "<<sum<<endl;
//           while(sum!=0){
//             vec.push_back(sum%10);
//             sum=sum/10;
//           }
//           int size= vec.size();
//           ListNode* ans= new ListNode(vec[size-1]);
//           for(int i=size-1;i>=0;i--){
//              ListNode* newnode= new ListNode(vec[i],ans);
//              ans=newnode;
//           }
//           return ans;
//      }

//  };

/**  * Definition for singly-linked list.  * struct ListNode {  *     int val;  *     ListNode *next;  *     ListNode() : val(0), next(nullptr) {}  *     ListNode(int x) : val(x), next(nullptr) {}  *     ListNode(int x, ListNode *next) : val(x), next(next) {}  * };  */

  /*
  1 9
10
9 9 9 9 9 9 9 9 9 1
  */
struct ListNode
{


  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
long long giveNum(ListNode *root)
{
  long long num = 0;
  vector<int> vec;
  while (root != nullptr)
  {
    vec.push_back(root->val);
    root = root->next;
  }
  cout<<endl;
  for(int ele: vec)
    cout<<ele<<" ";
    cout<<endl;
  for (int i = vec.size() - 1; i >= 0; i--)
  {
    num =( (num * 10) +(vec[i]));
  } //  cout<<num<<endl;

  return num;
}
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *ls, ListNode *ls2)
  {
   vector<int> ans;
   int cary=0;
   int num1=0;
   int num2=0;
   while(ls!=nullptr && ls2!=nullptr){
        
   }
  }
};

int main()
{

  int n;
  cin >> n;
  int ele;
  cin >> ele;
  ListNode ls(ele);
  ListNode *root1 = &ls;

  for (int i = 1; i < n; i++)
  {
    int ele;
    cin >> ele;
    ListNode *newnode = new ListNode(ele, root1);
    root1 = newnode;
  }
  //   ListNode* temp= root1;
  //  while(temp!=nullptr){
  //   cout<<temp->val<<"->";
  //   temp=temp->next;
  //  }
  cin >> n;
  cin >> ele;
  ListNode ls2(ele);
  ListNode *root2 = &ls2;

  for (int i = 1; i < n; i++)
  {
    cin >> ele;
    ListNode *newnode = new ListNode(ele, root2);
    root2 = newnode;
  }
  //   cout<<endl;
  //  temp= root2;
  //  while(temp!=nullptr){
  //   cout<<temp->val<<"->";
  //   temp=temp->next;
  //  }

  Solution s;
  ListNode *ans = s.addTwoNumbers(root1, root2);
  cout << endl;
  ListNode *ttemp = ans;
  while (ttemp != nullptr)
  {
    cout << ttemp->val << "->";
    ttemp = ttemp->next;
  }
}