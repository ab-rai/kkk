#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll i,j,ans=0,n;
  cin>>n;
  ll a[n][n];
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      cin>>a[i][j];
    int max=0;
  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          int a1,a2,a3,a4;
          a1=a2=a3=a4=1;
          if(j<=n-4){
          for(int k=j;k<=j+3;k++)
            {
            a1*=a[i][k];
            }
          }
          if(i<=n-4){
          for(int k=i;k<=i+3;k++)
            {
            a2*=a[k][j];
            }
          }
          if(i<=n-4 && j<=n-4){
          for(int k=0;k<=3;k++)
            {
            a3*=a[i+k][j+k];
            }
          }
          if(i<=n-4 && j>=3){
          for(int k=0;k<=3;k++)
            {
            a4*=a[i+k][j-k];
            }
          }
          int t;
          if(a1>a2){
            if(a1>a3){
              t=a1;
            }
            else t=a3;
          }
          else{
            if(a2>a3)
            t=a2;
            else t=a3;
          }
          if(a4>t)
          t=a4;
          if(t>max)
          max=t;
          cout<<"i,j,a1,a2,a3,a4,t,max="<<i<<","<<j<<","<<a1<<","<<a2<<","<<a3<<","<<a4<<","<<t<<","<<max<<endl;
          }
      }
  cout<<"\n\nans="<<max<<endl;
}
