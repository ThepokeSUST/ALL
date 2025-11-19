#include <iostream>
#include <vector>

using namespace std;

class node
{
  node *arr[26];
  bool isEnd;
  int pre;

public:
  node()
  {
    for (int i = 0; i < 26; i++)
      arr[i] = NULL;
    isEnd = false;
    pre = 0;
  }
  void setEnd()
  {
    this->isEnd = true;
  }
  void resetEnd()
  {
    this->isEnd = false;
  }
  bool chkEnd()
  {
    return this->isEnd;
  }
  node *getnode(int idx)
  {
    return arr[idx];
  }
  void setNode(int idx, node *newnode)
  {
    arr[idx] = newnode;
  }
  void setPre()
  {
    pre++;
  }
  int getPre()
  {
    return pre;
  }
  void resetPre(){
    pre--;
  }
};

class Trie
{
  node *root;

public:
  Trie()
  {
    root = new node();
  }

  void insert(string str)
  {
    int n = str.size();

    node *temp = root;
    for (int i = 0; i < n; i++)
    {

      int idx = str[i] - 'a';
      if (temp->getnode(idx) == NULL)
      {
        node *newnode = new node();
        temp->setNode(idx, newnode);
      }
      temp = temp->getnode(idx);
      temp->setPre();
    }
    temp->setEnd();
  }
  bool isExist(string str)
  {
    int n = str.size();

    node *temp = root;

    for (int i = 0; i < n; i++)
    {

      int idx = str[i] - 'a';
      if (temp->getnode(idx) == NULL)
        return false;
      temp = temp->getnode(idx);
    }
    return temp->chkEnd();
  }
  int countPre(string str)
  {
    int n = str.size();
    node *temp = root;

    for (int i = 0; i < n; i++)
    {
      int idx = str[i] - 'a';
      if (temp->getnode(idx) == NULL)
        return 0;
      temp = temp->getnode(idx);
    }
    return temp->getPre();
  }
  void deleteWord(string str)
  {

    node *temp = root;
    if (!isExist(str))
      return;

    for (int i = 0; i < str.size(); i++)
    {
      int idx = str[i] - 'a';
      temp=temp->getnode(idx);
      temp->resetPre();
    }
    temp->resetEnd();
  }
};
int main()
{

  cout << "how many words do you have?";
  int n;
  cin >> n;
  Trie T = Trie();
  while (n--)
  {
    string str;
    cin >> str;
    T.insert(str);
  }

  cout << "Query number for word contains ";
  cin >> n;
  while (n--)
  {
    // cin.ignore();
    string str;
    cin >> str;
    if (!T.isExist(str))
      cout << "the word " << str << " not found\n";
    else
      cout << "found\n";
  }
  cout << "query number for prefix ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string str;
    cin >> str;
    cout << T.countPre(str) << endl;
  }
  cout<<"Delete Operation\n";
  T.deleteWord("dipok");
  cout<<T.isExist("dipok")<<endl;
  cout<<T.countPre("dip");
}