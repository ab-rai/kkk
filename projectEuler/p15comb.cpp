#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n){
  ll ans=1;
  for(ll i=2;i<=n;i++)
    ans=ans*i;
  return ans;
}
int main(){
  ll n,sn=1,t;
  cin>>n;
  t=n;
  while(n)
  sn*=n--;
  cout<<"fact n="<<sn<<endl;

  cout<<"fact n="<<fact(t)<<endl;
}
