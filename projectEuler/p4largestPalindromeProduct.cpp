#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ispalindrome(ll a){
  ll k=0,t=a;
  while(a){
    k=k*10+a%10;
    a/=10;
  }
  if(k==t)
    return 1;
  else return 0;
}
int main(){
  ll n,m,max=0;
  cin>>n>>m;
  for(ll i=n;i<=m;i++){
    for(ll j=n;j<=m;j++){
      if(ispalindrome(i*j) && i*j>max)
        max=i*j;
    }
  }
  cout<<max <<endl;
}
