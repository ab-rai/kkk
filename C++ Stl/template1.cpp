#include<bits/stdc++.h>
using namespace std;
template <class X> X mymax(X a,X b,X c){
  if(a>b){
    if(b>c)
    return b;
    else return c;
  }
  else if(b>c)
  return b;
  else return c;
}
int main(){
  int a,b,c;
  float fa,fb,fc;
  cin>>a>>b>>c;
  cin>>fa>>fb>>fc;
  cout<<"max="<<mymax(a,b,c)<<endl;
  cout<<"max="<<mymax(fa,fb,fc)<<endl;
}
