#include <bits/stdc++.h>
#define ll long long
using namespace std;
enum week {monday, tuesday, wednesday, thursday, friday, saturday,sunday };

int main(){
  int t;
  cin>>t;
  while(t--){
    string s,e;
    int l,r;
    cin>>s>>e>>l>>r;
    //cout<<s<<e<<l<<r;
    week first=s;
    week last=e;
    int diff;
    if(last-first>=0){
      diff=last-first+1;
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
