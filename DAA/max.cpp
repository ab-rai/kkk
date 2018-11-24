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
    ll suml=0,sumr=0,max=-1,maxInd=-1,uptoSum=0;
    for(int i=0;i<n;i++){
      uptoSum+=arr[i];
      if(max<(sum-uptoSum)*uptoSum){
        max=(sum-uptoSum)*uptoSum;
        maxInd=i;
    //    cout<<"(sum-uptoSum)="<<(sum-uptoSum)<<" uptoSum="<<uptoSum<<endl;
  //      cout<<"i,max,maxInd="<<i<<" "<<max<<" "<<maxInd<<endl;
        }
      }

      cout<<maxInd+1<<endl;
    }
}
