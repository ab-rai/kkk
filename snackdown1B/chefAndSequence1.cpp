#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,k;
  cin>>t;
  for(int i=0;i<t;i++){
    cout<<"enter n and k\n";
    int cnt=0;
    cin>>n>>k;
    cout<<"n,k="<<n<<" , "<<k;
    vector<int> v;
    for(int j=0;j<n;j++){
      cin>>v[j];
      if(v[j]!=1)
        cnt++;
    }
      cout<<"\nCout vector v=";
    for(int j=0;j<n;j++){
      cout<<v[j]<<" , ";
    }
    cout<<"\ncnt="<<cnt<<endl;
    cout<<"enter anything\n";
    int t;
    cin>>t;
    if(cnt<=k)
      cout<<"YES\n";
    else cout<<"NO\n";
  }
}
