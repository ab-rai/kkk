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
      cin>>a[j];
    }

    int min=m*l,temp,cnt,j;

    for(j=1;j<=n;j++){
      cout<<"min="<<min<<endl;
      cnt=0;
      int ans;
      if(a[j]>k){
        ans=m*l-a[j-1];
        if(ans<min && ans>=0)
          min=ans;
        else if(ans<min)
          min=0;

        cout<<"min,ans="<<min<<" , "<<ans<<endl;
        break;
      }
      temp=m*l-a[j];
      if(temp<min && temp>=0)
        min=temp;
      else if(temp<min)
        min=0;

      while(a[j]==a[j+1] && j!=n){
        cnt++;
        j++;
      }
      m-=(a[j]-a[j-cnt-1])/l;
      m+=cnt+1;

    }
    if(j>n){
      temp=m*l-a[j];
      if(temp<min && temp>=0)
        min=temp;

      else if(temp<min)
        min=0;
      }
    if(min)
      cout<<min<<endl;
    }
}
