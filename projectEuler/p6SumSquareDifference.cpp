#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,a1=0,a2=0;
  cin>>n;
  for(ll i=1;i<=n;i++){
    a1+=i*i;
    a2+=i;
    }

  cout<<a2*a2-a1<<endl;
}
