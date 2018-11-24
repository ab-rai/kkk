#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    switch(n){
      case 2010:
      case 2015:
      case 2016:
      case 2017:
      case 2019:cout<<"HOSTED\n";
                break;
      default:cout<<"NOT HOSTED\n";

    }
  }
}
