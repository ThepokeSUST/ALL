#include<bits\stdc++.h>


using namespace std;
int MOD=100/4;
int HASH(string str,int n,int radix){
      
    long long ans=0,factor=1;
    for(int i=n-1;i>=0;i--){
        ans+=(str[i]-'a')*factor%MOD;
        factor*=radix;
    }
    return ans%MOD;
}

int find(string hey,string ned){
    int n=hey.size();
    int m=ned.size();

    if(n<m) return -1;
    
    long long radix=26;
    long long mxFactor=1;
    for(int i=0;i<ned.size();i++){
        mxFactor=(mxFactor*radix)%MOD;
    }
    long long hashned=HASH(ned,ned.size(),radix);
    long long hashhay=0;

    for(int i=0;i<=n-m;i++){
        if(i==0){
           hashhay=HASH(hey,ned.size(),radix);
        }
        else{
            hashhay=((hashhay*radix)%MOD-((hey[i-1]-'a')*mxFactor)%MOD +(hey[i+m-1]-'a')+MOD)%MOD;//Nice approach......
        }
        cout<<"check "<<hashhay<<endl;
        if(hashned==hashhay){
            for(int j=0;j<m;j++){
                if(ned[j]!=hey[j+i]) break;
                if(j==m-1) return i;
            }
        }

    }
    return -1;

}
int main(){
    string hey,ned;
    cin>>hey>>ned;
    cout<<find(hey,ned);
}