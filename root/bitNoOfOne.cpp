//counting numbers of 1 in its binary form
#include<iostream>
using namespace std;
int main(){
  int n,cnt=0;
  cout<<"Enter the no. ";
  cin>>n;
  while(n){
    n=n & (n-1);
    
    cnt++;
  }
  cout<<"Number of n= "<<cnt<<endl;
}
