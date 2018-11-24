#include<bits/stdc++.h>
#define ll long long
using namespace std;
int myhcf(ll a,ll b){
  ll t;
  if(a>b){
    t=a;
    a=b;
    b=t;
    }
  if(a==0)
    return b;
  else return myhcf(b%a,a);
}
int main(){
  ll n,h=1,temp;
  cin>>n;
  temp=n;
  for(ll i=n-1;i>=1;i--){
    h=myhcf(temp,i);
    temp=(temp*i)/h;
    }
  cout<<temp<<endl;
}
