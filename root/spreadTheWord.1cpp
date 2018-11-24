#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  for(long long i=0;i<t;i++){
    long long cnt=1,ans=0;
    long long n;
    cin>>n;
    long long a[n];
    for(long long j=0;j<n;j++){
      cin>>a[j];
    }
    long long j=1,flag=0;
    while(cnt<n){
      for(long long k=0;k<j;k++){
        cnt=cnt+a[k];
        if(cnt>=n)
          {flag=1;
          //cout<<"1st break \n";
              break;
          }
      }
      j=cnt;
      ans++;
      if(flag==1)
        {
        //cout<<"2nd break \n";
          break;
        }
      //cout<<"j="<<j<<" cnt="<<cnt<<" ans="<<ans<<endl;
    }
    cout<<ans<<endl;
    //cout<<"t="<<t<<" n="<<n<<endl;
  }
}
