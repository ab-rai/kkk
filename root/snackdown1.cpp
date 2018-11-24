#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int cnt=1,ans=0;
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
      cin>>a[j];
    }
    int j=1,flag=0;
    while(cnt<n){
      for(int k=0;k<j;k++){
        cnt=cnt+a[k];
        if(cnt>=n)
          {flag=1;
          cout<<"1st break \n";
              break;
          }
      }
      j=cnt;
      ans++;
      if(flag==1)
        {
        cout<<"2nd break \n";
          break;
        }
      //cout<<"j="<<j<<" cnt="<<cnt<<" ans="<<ans<<endl;
    }
    cout<<ans<<endl;
    //cout<<"t="<<t<<" n="<<n<<endl;
  }
}
