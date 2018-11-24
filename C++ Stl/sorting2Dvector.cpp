#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<pair<int,int> > vect;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
    vect.push_back(pair<int,int> (t,i));
  }
  for(int i=0;i<n;i++){
    pair<int,int> temp;
    temp=vect[i];
    cout<<i<<" , first:- "<<temp.first<<" second:- "<<temp.second<<endl;
  }
  sort(vect.begin(),vect.end());
  for(int i=0;i<n;i++){
    pair<int,int> temp;
    temp=vect[i];
    cout<<i<<" , first:- "<<temp.first<<" second:- "<<temp.second<<endl;
  }

}
