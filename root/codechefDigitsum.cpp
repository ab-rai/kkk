#include<bits/stdc++.h>
using namespace std;
int digitSum(long long n){
  int ans=0;
  while(n!=0){
    ans=ans+n%10;
    n=n/10;
  }
  return ans;
}
int main(){
  long long int t,n,d,min;
  int minIndex;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>d;
    queue <pair<long long int, int> > mq;
    min=n;
    minIndex=0;
    mq.push(pair<long long int , int> (n,0));
    for(int j=0;j<100000;j++){
      pair<long long int, int>p=mq.front();
      mq.pop();
      if(p.first<min){
        min=p.first;
        minIndex=p.second;
      }
      //cout<<p.first<<" "<<p.second<<endl;
      mq.push(pair<long long int,int>(p.first+d,p.second+1));
      mq.push(pair<long long int,int>(digitSum(p.first),p.second+1));
    }
    cout<<min<<" "<<minIndex<<endl;
  }
}
