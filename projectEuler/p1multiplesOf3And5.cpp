//only a bit faster then the naive approach due to various comparisons 
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long ans=0;
  int i3=1,i5=1;
  while(3*i3<n){
  //  cout<<"start:-i3,i5,ans="<<i3<<" "<<i5<<" "<<ans<<endl;
    if(3*i3==5*i5){
      ans+=3*i3;
      i3++;
      i5++;
      }
    else if(3*i3<5*i5){
      ans+=3*i3;
      i3++;
      }
    else if(5*i5<3*i3 && 5*i5 < n){
      ans+=5*i5;
      i5++;
      }
      else break;
  //    cout<<"end:-i3,i5,ans="<<i3<<" "<<i5<<" "<<ans<<endl;
      }
    cout<<ans<<endl;
}
