#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long ans=0,a=1,b=2,t;
  ans+=2;
  while(1){
    //ans+=b;
    t=a+b;
    a=b;
    b=t;
    if(b<=n){
      if(b%2==0){
      //  cout<<"start:-b,ans="<<b<<" "<<ans<<endl;
        ans+=b;
      //  cout<<"end:-b,ans="<<b<<" "<<ans<<endl;
        }
      }
    else break;

    }
    cout<<ans<<endl;
}
