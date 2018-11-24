#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,cnt=0;
  cin>>n;
  double ans=1;
  for(int i=1;i<=n;i++){
    ans*=2;
  //  cout<<i<<" "<<ans<<endl;
  }
  while(ans){
    cnt+=ans%10;
    ans/=10;
    cout<<"cnt="<<cnt<<endl;
  }

  cout<<"ans"<<ans<<endl;
}
