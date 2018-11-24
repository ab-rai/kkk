#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m,k,l;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>m>>k>>l;
    int a[n+1];
    a[0]=0;
    for(int j=1;j<=n;j++){
      cin>>a[n];
    }
    int min=m*l,temp,cnt=0;
    for(int j=1;j<=n;j++){
      cnt=0;
      temp=m*l-a[j];
      if(temp<min)
        min=temp;
      while(a[j]==a[j+1]){
        cnt++;
        j++;
        //m-=(a[j]-a[j-1])/l;
        //m++;
      }
      m-=(a[j]-a[j-cnt-1])/l;
      m+=cnt+1;
    }
    if(min<=k)
      cout<<"YES\n";
    else cout<<"NO\n";
  }
}
