#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int ele)
    {
        val = ele;
        left = right = NULL;
    }
};

TreeNode *create()
{

    int ele;
    cin >> ele;

    if (ele == -1)
        return NULL;

    TreeNode *temp = new TreeNode(ele);
    temp->left = create();
    temp->right = create();

    return temp;
}

void binarypath(TreeNode *root, string &st, vector<string> &ans)
{

    if (root == NULL)
        return;
    string adding=to_string(root->val);    
    st += adding;
    if (root->left == NULL and root->right == NULL)
    {
        ans.push_back(st);
        st.erase(st.size()-adding.size());
        return;
    }
    st += "->";
    binarypath(root->left, st, ans);
    binarypath(root->right, st, ans);
    int del=adding.size()+2;
    cout<<adding<<endl;
    while(del--)
    st.pop_back();
    
}
int main()
{
    //  string st="";
    //  st+=49;
    //  cout<<"st 1 "<<st<<endl;
    //  st+="1";
    //  cout<<st;

    // string str="sds";
    // str.pop_back();
    // cout<<str;
    // string s="->";
    // cout<<s.size();
    TreeNode *root = create();
    vector<string> ans;
    string st = "";
    binarypath(root, st, ans);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}