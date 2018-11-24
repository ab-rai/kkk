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
    int diff;
    if(last-first>=0){
      diff=last-first +1;
      }
    else{
      diff=8-(first-last);
      }
      if((diff>=l && diff<=r) &&(diff+7>=l && diff+7<=r))
      {
        cout<<"many"<<endl;
      }
      else if((diff>=l && diff<=r))
      {
        cout<<diff<<endl;
      }
      else cout<<"impossible"<<endl;
  //  cout<<maxInd+1<<endl;
    }
}
