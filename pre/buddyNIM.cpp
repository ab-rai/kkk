#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<m;i++)
      cin>>b[i];
    int flag=0;
      if(n==m){
        for(int i=0;i<n;i++){
          if(a[i]!=b[i]){
            flag+=1;
            cout<<"Alice"<<endl;

            break;
            }
        }
        }
        if(flag==0)
        cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

  }

}
