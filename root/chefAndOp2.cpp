//#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
  long long t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long n;
    //int flag=0,temp;
    cin>>n;
    long long a[n],b[n];
    int flag=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int r=n-1;
    while(r!=1){//will see for 0,1,2 in last
      if(a[r]+2>=b[r] && a[r]!=b[r]){
        cout<<"NIE"<<endl;
        flag=1;
        break;
      }
      else if(a[r]==b[r]){
        while(a[r]==b[r] && r!=1)
          {
            //cout<<"a[r],b[r]="<<a[r]<<","<<b[r]<<" r="<<r<<endl;
            r--;
          }
      }
      else{
        while(a[r]+2<=b[r])
          {
          a[r]+=3;
          a[r-1]+=2;
          a[r-2]+=1;
          }
      }
    }
    if(a[0]==b[0] && a[1]==b[1] && flag==0)
      cout<<"TAK"<<endl;




   }
}
