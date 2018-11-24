#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll i,j,k,ans=0,n;
  cin>>n;
  for(i=1;i<=1000;i++){
    for(j=i;j<=1000;j++){
      if(i+j<=999){
      k=n-i-j;
      if(i*i+j*j==k*k){
        ans=i*j*k;
        cout<<"\nans,i,j,k="<<ans<<" "<<i<<" "<<j<<" "<<k;
    }

    }
    }
  }
  cout<<"\n\nans="<<ans<<endl;
}
