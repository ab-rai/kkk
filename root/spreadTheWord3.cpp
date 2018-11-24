#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  for(long long i=0;i<t;i++){
    long long cnt=1,ans=0,back=0;
    long long n;
    cin>>n;
    long long a[n];
    for(long long j=0;j<n;j++){
      cin>>a[j];
    }
    long long t=0;
    int g;
    while(cnt<n){
      for(g=t;g<cnt;g++){
          back+=a[g];
        }
        t=g;

      cnt+=back;
      ans++;
      //cout<<"j="<<j<<" cnt="<<cnt<<" ans="<<ans<<endl;
    }
    cout<<ans<<endl;
    //cout<<"t="<<t<<" n="<<n<<endl;
  }
}
