//primefactorization
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,i=2;
  cin>>n;
  cout<<"Prime factors are:- "<<1<<" ";
  while(n!=1){
    if(n%i==0){
      cout<<i<<" ";
      while(n%i==0){
        n=n/i;
        //cout<<" n= "<<n<<endl;
          }
    }
    i++;
  }

}
