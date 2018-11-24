#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  n++;
  ll ans[n][n];
  for(int i=0;i<n;i++){
    ans[i][n-1]=1;
  }
  for(int i=0;i<n;i++){
    ans[n-1][i]=1;
  }
  for(int i=n-2;i>=0;i--){
    for(int j=n-2;j>=0;j--){
      ans[i][j]=ans[i+1][j]+ans[i][j+1];
    }
  }
  cout<<"ans"<<ans[0][0]<<endl;
}
