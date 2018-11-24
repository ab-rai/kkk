#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll i,j,flag,ans=0,n;
  cin>>n;
  for(i=2;i<n;i++){
    flag=0;
    for(j=2;j<=sqrt(i);j++){
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0){
      ans+=i;
    }
  }
  cout<<"\n\nans="<<ans<<endl;
}
