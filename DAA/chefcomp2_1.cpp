#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s,e;
    int l,r;
    cin>>s>>e>>l>>r;
    //cout<<s<<e<<l<<r;
    int first,last;
    //week first=s;
    //week last=e;
    if(s=="monday")
    first=0;
    else if(s=="tuesday")
    first=1;
    else if(s=="wednesday")
    first=2;
    else if(s=="thursday")
    first=3;
    else if(s=="friday")
    first=4;
    else if(s=="saturday")
    first=5;
    else if(s=="sunday")
    first=6;

    if(e=="monday")
    last=0;
    else if(e=="tuesday")
    last=1;
    else if(e=="wednesday")
    last=2;
    else if(e=="thursday")
    last=3;
    else if(e=="friday")
    last=4;
    else if(e=="saturday")
    last=5;
    else if(e=="sunday")
    last=6;
    int diff,cnt=0;
    if(last>=first){
      diff=last-first;
      }
    else{
      diff=7-(first-last);
      }
      int i=diff;
      while(i<=r){
    //    cout<<"start i,cnt="<<i<<" "<<cnt<<endl;

        if(i>=l && i<=r)
        cnt++;
        i+=7;
      //  cout<<"end i,cnt="<<i<<" "<<cnt<<endl;
      }
      if(cnt==0)
      {
        cout<<"impossible"<<endl;
      }
      else if(cnt==1)
      {
        cout<<diff<<endl;
      }
      else cout<<"many"<<endl;
  //  cout<<maxInd+1<<endl;
    }
}
