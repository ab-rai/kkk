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
    sort(a,a+n+1);
    cout<<"sorted a=";
    for(int j=0;j<=n;j++){
      cout<<a[j]<<" ";
    }
    cout<<endl;
    int min=m*l,temp,cnt,j,tame=0;





    for(j=1;j<=n;j++){
      //cout<<"min="<<min<<endl;

      cnt=0;
      int ans;
      if(a[j]>k){
        cout<<"j,min,ans="<<j<<" , "<<min<<" , "<<ans<<endl;
        ans=m*l-a[j-1];
        if(ans<min && ans>=0)
          min=ans;
        else if(ans<min)
          min=0;

          cout<<"j,min,ans="<<j<<" , "<<min<<" , "<<ans<<endl;
          break;
        }
        cout<<"j,min="<<j<<" , "<<min<<endl;
        temp=m*l-(a[j]-a[j-1])/l;
      if(temp<min && temp>=0)
        min=temp;
      else if(temp<min)
        min=0;
        cout<<"j,min,temp="<<j<<" , "<<min<<" , "<<temp<<endl;

      while(a[j]==a[j+1] && j!=n){
        cnt++;
        j++;
      }
      m-=(a[j]-a[j-cnt-1])/l;
      m+=cnt+1;
    //  tame=a[j];
    }
    if(j<n)
    cout<<"if j<n final ans="<<min<<endl;
  else{
      cout<<"else final ans="<<m*l-(k-a[j-1])<<endl;

      }
    }
}
