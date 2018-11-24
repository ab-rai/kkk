#include<iostream>
using namespace std;
int digitSum(long long);
//int mylog(long long);


int myLog(long long n){
  int ans=0;
  while(n!=0){
    ans++;
    n=n/2;
    //cout<<"ans= "<<ans<<" n="<<n<<endl;
  }
  return ans;
}

int main(){
  long long n,d,min,minIndex;
  int t;
  cin>>t;
  //cout<<"enter n and d";
  for(int r=0;r<t;r++){
  cin>>n>>d;
  //cout<<"numbers are:-"<<n<<" "<<d;
  long long arr[100000],ans1=0;
  arr[0]=n;
  min=arr[0];
  for(int i=0;i<2000;i++){
  //  cout<<"i= "<<i<<" ";
    arr[(2*i)+1]=digitSum(arr[i]);
      arr[(2*i)+2]=arr[i]+d;
      if(arr[i]<min){
        min=arr[i];
        minIndex=i+1;
      }
    //  cout<<"i= "<<i<<" min="<<min<<" arr[i]="<<arr[i]<<endl;
  }
  ans1=myLog(minIndex+1);
  //cout<<endl<<min<<" ans1="<<ans1<<" minIndex="<<minIndex;
  cout<<min<<" "<<ans1-1<<endl;
}
}

int digitSum(long long n){
  long long ans=0;
  while(n!=0){
    ans=ans+n%10;
    n=n/10;
  }
  return ans;
}
