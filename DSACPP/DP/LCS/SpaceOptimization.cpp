#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str, strr;
    cin >> str >> strr;

   

    vector<int> pre(strr.size()+1,0),cur(strr.size()+1,0);

    for(int i=1;i<=str.size();i++){
        for(int j=1;j<=strr.size();j++){

            if (str[i-1] == strr[j-1])
                cur[j]=1+pre[j - 1];
            else
            {
                cur[j]= max(pre[j], cur[j-1]);
            }
        }
        pre=cur;
    }
    cout<<endl;
  cout<<pre[strr.size()];
}