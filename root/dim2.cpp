#include<iostream>
using namespace std;

int myLog(long long n){
  int ans=0;
  while(n!=0){
    ans++;
    n=n/2;
  //  cout<<"n="<<n<<" ans="<<ans<<"  ";
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter n:- ";
  cin>>n;
  for(int i=0;i<n;i++)
    cout<<"log "<<i<<" = "<<myLog(i+1)<<"\n";
}
