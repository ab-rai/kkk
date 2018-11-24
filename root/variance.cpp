#include<bits/stdc++.h>
# define INFI 98765432
using namespace std;
int n;
int myvariance(int arr[],int s){
  long long sum=0;
  double mean,varia;
  for(int i=0;i<s;i++){
    sum+=arr[i];
  }
  mean=1.0*sum/s;

}
int main(){
  //int n;
  cout<<"Enter the toatal number of matrix:- ";
  cin>>n;
  int arr[n+1];
  cout<<"Enter the elements for calculating minimum operation:-\n";
  cout<<"for 2 x 3 ,3 x 4 only enter 2,3,4\n";
  for(int i=0;i<=n;i++){
    cin>>arr[i];
  }
  //int m[n][n];

  int ans=matrixCalc(arr);
  cout<<"\n ans="<<ans;
}
