#include<iostream>
using namespace std;
int digitSum(long long);
int main(){
  long long n,d,i,min;
  cin>>n>>d;
  long long arr[1000000];
  arr[0]=n;
  min=arr[0];
  for(i=0;i<1000;i++){
    arr[(2*i)+1]=digitSum(arr[i]);
      arr[(2*i)+2]=arr[i]+d;
      if(arr[i]<min)
        min=arr[i];
  }
  cout<<min;
}

int digitSum(long long n){
  long long ans=0;
  while(n!=0){
    ans=ans+n%10;
    n=n/10;
  }
  return ans;
}
