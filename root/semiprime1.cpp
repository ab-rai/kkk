//#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int mycp(int n){
  int t;
  for(int j=2;j<=sqrt(n);j++){
    //cout<<"j="<<j<<" enter t"<<endl;
    //cin>>t;
    if(n%j==0)
    {
    //  cout<<n<<" is divisible by "<<j<<endl;
      return 0;
    }
  }
  return 1;
}

int mysemiprime(int n){
  //cout<<"in if i="<<i<<endl;
    for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
      if(mycp(i)==1 && mycp(n/i)==1 && (i!=n/i))
        {
        //cout<<"n="<<n<<" mycp(i)="<<i<<" , "<<n/i<<" = "<<mycp(i)<<"  , "<<mycp(n/i)<<endl;
      //  cout<<"YES semiprime :- "<<n<<endl;
        return 1;
        }
      }
    }
    //cout<<"NO not semiprime:- "<<n<<endl;
    return 0;

}


int main(){
  long long t;
  cin>>t;
  for(long long i=0;i<t;i++){
    long long n;
    int flag=0,temp;
    cin>>n;
    for(int i=5;i<=n/2;i++){
        if(mysemiprime(i)==1 && mysemiprime(n-i)==1)
        {flag=1;
          cout<<"YES"<<endl;
          break;
        }

    //cout<<"t="<<t<<" n="<<n<<endl;
     }
     if(flag==0){
       cout<<"NO"<<endl;
     }
   }
}
