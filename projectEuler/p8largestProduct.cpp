#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  string s;
  cin>>s;
  cout<<"input str="<<s<<endl;
  ll max=0,pr=1,n;
  cin>>n;
  for(int i=0;i<n;i++){
    pr*=s[i]-48;
    cout<<s[i]<<" "<<pr<<"\t";
  }
  //if(pr>max)
  max=pr;
  for(int i=n;s[i]!='\0';i++){
    pr=1;
    for(int j=i-1;j>=i-n;j--){
      pr*=s[j]-48;
      //cout<<s[i]<<" "<<pr<<"\t";
    }

  //  cout<<"i,s[i]="<<i<<" "<<s[i]<<endl;
    //pr/=(s[i-n]-48);
  //  pr*=(s[i]-48);
    if(pr>max){
    max=pr;
  //  cout<<"changed max="<<max<<endl;
    }
  //  cout<<"pr,max="<<pr<<" "<<max<<endl;
  }
  cout<<"\n\nans="<<max<<endl;
}
