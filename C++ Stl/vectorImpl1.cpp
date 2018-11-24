#include<bits/stdc++.h>
using namespace std;
int main(){
  vector <int> ar;
  int i=0,n,t;
  cout<<"Enter the size of the array:-";
  cin>>n;
  cout<<"Enter the array:- ";
  for(i=0;i<n;i++){
    cin>>t;
    ar.push_back(t);
  }
  cout<<"The input array is:-";
  for(i=0;i<n;i++){
    cout<<ar[i]<<" ";
  }

}
