#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n,i=2;
  cin>>n;
  while(1){
    if(n==i)
    break;
    while(n%i==0)
      n/=i;

    i++;
    }
  cout<<i<<endl;
}
