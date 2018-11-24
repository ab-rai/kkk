#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k,sum=0;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      arr[i]=pow(double(k),arr[i]);
      sum+=arr[i];
      }
  //    cout<<"SUm="<<sum<<endl;
    ll suml=0,sumr=sum,max=-1,maxInd=-1;
    for(int i=0;i<n-1;i++){
      suml+=arr[i];
      sumr-=arr[i];
      if(max<suml*sumr){
        max=suml*sumr;
        maxInd=i;
    //    cout<<"(sum-uptoSum)="<<(sum-uptoSum)<<" uptoSum="<<uptoSum<<endl;
  //      cout<<"i,max,maxInd="<<i<<" "<<max<<" "<<maxInd<<endl;
        }
      }
      cout<<maxInd+1<<endl;
    }
}
