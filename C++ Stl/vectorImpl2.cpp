#include<bits/stdc++.h>
using namespace std;
int main(){
  vector <int> ar;
  int i=0,n,t;

  cout<<"Size of the vector:-"<<ar.size()<<endl;
  cout<<"Enter the size of the vector:-";
  cin>>n;
  cout<<"Enter the vector:- ";
  for(i=0;i<n;i++){
    cin>>t;
    ar.push_back(t);
  }
  cout<<"Size of the vector:-"<<ar.size()<<endl;
  cout<<"The input vector is:-";
  for(i=0;i<n;i++){
    cout<<ar[i]<<" ";
  }

}
