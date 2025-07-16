 #include<iostream>

 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


  class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* ans=NULL;
          ListNode* tail=NULL;

          int carry=0;
          int sum=0;
          while(l1 && l2){
             int temp= carry+l1->val+l2->val;
             carry=0;
             sum=temp%10;
             carry+= (temp/10);

             if(ans==NULL){
                ListNode* newnode=new ListNode(sum);
                ans=tail=newnode;
             }
             else{
                tail->next=new ListNode(sum);
                tail=tail->next;
             }
             l1=l1->next;
             l2=l2->next;
          }
          while(l1){
            int temp=carry+l1->val;
            sum=temp%10;
            carry= temp/10;
            tail->next=new ListNode(sum);
            tail=tail->next;
            l1=l1->next;
          }
          while(l2){
            int temp= carry+l2->val;
            sum=temp%10;
            carry=temp/10;
            tail->next= new ListNode(sum);
            tail=tail->next;
            l2=l2->next;
          }

          if(carry!=0){
            tail->next=new ListNode(carry);
            tail=tail->next;
          }

          return ans;
    }
};

class list{
     public:
     ListNode* root;
     ListNode* tail;
     list(){
       tail= root=NULL;
     }

     void addLast(int ele){
        ListNode* newnode=new ListNode(ele);
        if(!root){
            root=tail=newnode;
            return;
        }

        tail->next=newnode;
        tail=tail->next;
     }

    void show(){
        ListNode* temp=root;

        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    

};



int main(){
     
     
     int n,m;
     cin>>n>>m;
     list ls1;
     while(n){
         int last=n%10;
         n=n/10;
         ls1.addLast(last);
     }
     list ls2;
     while(m){
        int last=m%10;
        m/=10;
        ls2.addLast(last);
     }
    Solution s;
     ListNode* ans=s.addTwoNumbers(ls1.root,ls2.root);
     ListNode* temp=ans;
     while(temp){
        cout<<temp->val<<"->";
        temp=temp->next;
     }



}