#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,cnt=0,k=1;
  cin>>n;
  while(cnt<n){
  k++;
    int flag=0;
    for(ll i=2;i<=sqrt(k);i++){
      if(k%i==0){
        flag=1;
        break;
      }
    }
    if(flag==0){
      cnt++;
    }
  }

  cout<<k<<endl;
}
