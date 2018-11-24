//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  char ch[n];
  for(int i=0;i<n;i++)
    cin>>ch[i];
  for(int i=1;i<pow(2,n);i++){
    cout<<i<<":- ";
    for(int j=0;j<n;j++){
      if(i & (1<<j))
        cout<<ch[j];
    }
    cout<<endl;
  }
}
