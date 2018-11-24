//search and insert operations on Trie
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    string s;
    cin>>s;
    int j,cntr=0,cntg=0,size;
    for(j=0;s[j]!='\0';j++);
    size=j;
    if(s[0]==s[size-1] ){
      if(s[0]=='R')
      cntr++;
      else cntg++;
    }
      if(size==1){
        cout<<"yes"<<endl;
        continue;
      }
    if(size<=3 && (cntr==1 || cntg==1))
    {
      cout<<"no"<<endl;
      continue;
    }
    for(int j=1;s[j]!='\0';j++){
      if(s[j]==s[j-1]){
        if(s[j]=='R')
        cntr++;
        else cntg++;
      }
    }
    if(cntr<=1 && cntg<=1 && size%2==0)
    cout<<"yes"<<endl;
    else if(cntr==0 &&cntg==0)
    cout<<"yes"<<endl;

    else if((cntr==1 || cntg==1) && size%2==1)
    cout<<"no"<<endl;
    else cout<<"no"<<endl;
  }
}
