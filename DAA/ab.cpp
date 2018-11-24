//search and insert operations on Trie
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    string s;
    cin>>s;
    int a=0,b=0,cnt=1;
    for(int j=0;s[j]!='\0';j++){
      if(cnt%2==1 && s[j]!='.'){
        char t=s[j];
        int flag=0;
        while(s[j+1]=='.'){
          j++;
          flag=1;
        }
        if(flag==1){
        s[j]=t;
        a++;
        }
        cnt++;
        cout<<"\nj,a,b="<<j<<" , "<<a<<" , "<<b<<endl;
        for(int k=0;s[k]!='\0';k++){
            cout<<s[k]<<" ";
        }
        cout<<endl;

      }
      else{
        char t=s[j];
        int flag=0;
        while(s[j-1]=='.'){
          j--;
          flag=1;
        }
        if(flag==1){
        s[j]=t;
        b++;
        }
        cnt++;
        cout<<"\nj,a,b="<<j<<" , "<<a<<" , "<<b<<endl;
        for(int k=0;s[k]!='\0';k++){
            cout<<s[k]<<" ";
        }
        cout<<endl;

      }
    }
    for(int j=0;s[j]!='\0';j++){
        cout<<s[j]<<" ";
    }
    cout<<"\na,b="<<a<<" , "<<b<<endl;
    if(b>=a)
    cout<<"\nB"<<endl;
  else cout<<"\nA"<<endl;

  }
}
