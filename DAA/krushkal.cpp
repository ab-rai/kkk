//search and insert operations on Trie
#include <bits/stdc++.h>
using namespace std;
int main(){
  int vertex,edges;
//  cout<<"ENter the no. of vertex and edges:-";
  //cin>>vertex>>edges;
  vertex=9;
  edges=14;
  vector <pair<int,pair<int,int> > > weights;
  weights.push_back(pair<int,pair<int,int> (4,pair<int,int>(0,1))>);
  //weights.push_back({8,{0,7});
  weights.push_back(pair<int,pair<int,int> (8,pair<int,int>(0,7))>);
  weights.push_back(pair<int,pair<int,int> (8,pair<int,int>(1,2))>);
  weights.push_back(pair<int,pair<int,int> (11,pair<int,int>(1,7))>);
  weights.push_back(pair<int,pair<int,int> (7,pair<int,int>(2,3))>);
  weights.push_back(pair<int,pair<int,int> (2,pair<int,int>(2,8))>);
  weights.push_back(pair<int,pair<int,int> (4,pair<int,int>(2,5))>);
  weights.push_back(pair<int,pair<int,int> (9,pair<int,int>(3,4))>);
  weights.push_back(pair<int,pair<int,int> (14,pair<int,int>(3,5))>);
  weights.push_back(pair<int,pair<int,int> (10,pair<int,int>(4,5))>);
  weights.push_back(pair<int,pair<int,int> (2,pair<int,int>(5,6))>);
  weights.push_back(pair<int,pair<int,int> (1,pair<int,int>(6,7))>);
  weights.push_back(pair<int,pair<int,int> (6,pair<int,int>(6,8))>);
  weights.push_back(pair<int,pair<int,int> (7,pair<int,int>(7,8))>);
  for(int i=0;i<14;i++){
    pair<int,pair<int,int > > p;
    p=weights[i];
    cout<<"Edges="<<(p.second()).first()<<","<<(p.second()).second();
    cout<<" Weight="<<p.first()<<endl;
  }
//  cout<<"Enter the weights";
}
