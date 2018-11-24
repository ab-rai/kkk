#include<bits/stdc++.h>
using namespace std;
#define HALF 0.5
#define MULTIPLE 1000000000000000
int myHcf(long long a,long long b){
  if(a==0)
    return b;
  else return myHcf(b%a,a);
}
int main(){
  int t;
  cin>>t;
  int n[t];
  for(int i=0;i<t;i++)
    cin>>n[i];
  for(int i=0;i<t;i++){
    double start=0.0,end=1.0,ans=0.0;
    for(int j=1;j<=n[i];j++){
      if(j%2==0){
        start=start+(end-start)*HALF;
        }
      else end=start+(end-start)*HALF;
    //  cout<<"\nstart,end="<<start<<","<<end<<endl;
      }
    if(n[i]%2!=0){
      ans=end;
      }
    else ans=start;
    long long num,den;
    num=ans*MULTIPLE;
    den=MULTIPLE;
    long long divident=myHcf(num,den);
  //  cout<<"\nans="<<ans<<"num,den="<<num<<","<<den<<" divident="<<divident<<endl;
    num/=divident;
    den/=divident;
    cout<<num<<" "<<den<<" ";
    }
}
