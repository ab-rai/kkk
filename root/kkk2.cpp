#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long myans(long long n){
  long long ans=0;
  for(long long i=1;i<=n;i++){
    for(long long j=1;j<=n;j++)
    {
      ans+=i+j;
    }
  }
  return ans;
}

int main() {
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
    long long ans=0;
    ans=(long long)(1.0*n/2*(2+n+1));
    long long finans=0;
    finans=(long long)(1.0*n/2*(ans+(ans+(n-1)*n)));
        //               cout<<finans;
    long long qw=myans(n);
    if(qw!=finans)
      cout<<i<<"qw="<<qw<<"finans="<<finans<<endl;
  //  else cout<<"i="<<i<<" pass"<<"\t";
    }
    cout<<"\n@#{#{#{ }}}end";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
