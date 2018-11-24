//search and insert operations on Trie
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int tr,dr,ts,ds;
    cin>>tr;
    int arrtr[tr];
    for(int j=0;j<tr;j++)
      cin>>arrtr[j];

    cin>>dr;
    int arrdr[dr];
    for(int j=0;j<dr;j++)
        cin>>arrdr[j];

        cin>>ts;
        int arrts[ts];
        for(int j=0;j<ts;j++)
              cin>>arrts[j];

    cin>>ds;
    int arrds[ds];
    for(int j=0;j<ds;j++)
        cin>>arrds[j];

    int flag=0,k;

    for(int j=0;j<ts;j++){
      for(k=0;k<tr;k++){
        if(arrts[j]==arrtr[k]){
          break;
        }
      }
      if(k==tr){
        flag=1;
      }
    }
    for(int j=0;j<ds;j++){
      for(k=0;k<dr;k++){
        if(arrds[j]==arrdr[k]){
          break;
        }
      }
      if(k==dr){
        flag=1;
      }
    }
    if(flag==0){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
  }
}
