#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long t;
  long n;
  cin>>t;
  for(long i=0;i<t;i++){
    cin>>n;
    long di,rem;
    long bit=0,nibble=0,byte=0;
    double cnt;
  //n=n;
  di=n/26;
  cnt=((pow(2,di)));
cout<<"cnt="<<cnt<<"di="<<di<<"pow(2,di=)"<<((pow(2,di)))<<endl;
  if(cnt==0)
    cnt=1;
  rem=n%26;
  if(rem>=10){
    byte=cnt;
  }
  else if(rem>=2){
    nibble=cnt;
  }
  else bit=cnt;
  cout<<bit<<" "<<nibble<<" "<<byte<<endl;
 }
}
