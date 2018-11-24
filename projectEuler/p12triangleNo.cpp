#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll i=1,j,ans=0,n,cnt,sn;
  cin>>n;
  cout<<"n is="<<n<<endl;
  do{
    int t;
    //cin>>t;
    //cout<<"in do"<<endl;
    cnt=0;
    sn=(1.0*i/2)*(1+i);
    //cout<<"sn="<<sn<<endl;
    //cin>>t;
    for(j=1;j<=sqrt(sn);j++){
      if(sn%j==0){
        cnt+=2;
      }
    }
    if(sn%int(sqrt(sn))==0)
    cnt--;
  //  cout<<"i,sn,cnt="<<i<<" "<<sn<<" "<<cnt<<endl;
    i++;
  }while(cnt<=n);
  cout<<"\n\nans="<<sn<<endl;
}
