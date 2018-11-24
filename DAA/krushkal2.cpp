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
  weights.push_back(pair<int,pair<int,int> >(4,pair<int,int>(0,1)));
  //weights.push_back({8,{0,7});
  weights.push_back(pair<int,pair<int,int> >(8,pair<int,int>(0,7)));
  weights.push_back(pair<int,pair<int,int> >(8,pair<int,int>(1,2)));
  weights.push_back(pair<int,pair<int,int> >(11,pair<int,int>(1,7)));
  weights.push_back(pair<int,pair<int,int> >(7,pair<int,int>(2,3)));
  weights.push_back(pair<int,pair<int,int> >(2,pair<int,int>(2,8)));
  weights.push_back(pair<int,pair<int,int> >(4,pair<int,int>(2,5)));
  weights.push_back(pair<int,pair<int,int> >(9,pair<int,int>(3,4)));
  weights.push_back(pair<int,pair<int,int> >(14,pair<int,int>(3,5)));
  weights.push_back(pair<int,pair<int,int> >(10,pair<int,int>(4,5)));
  weights.push_back(pair<int,pair<int,int> >(2,pair<int,int>(5,6)));
  weights.push_back(pair<int,pair<int,int> >(1,pair<int,int>(6,7)));
  weights.push_back(pair<int,pair<int,int> >(6,pair<int,int>(6,8)));
  weights.push_back(pair<int,pair<int,int> >(7,pair<int,int>(7,8)));
  for(int i=0;i<14;i++){
    pair<int,pair<int,int > > p;
    p=weights[i];
    pair<int,int> t;
    t=p.second;
    cout<<"Edges="<<t.first<<","<<t.second;
    cout<<" Weight="<<p.first<<endl;
  }
  cout<<"\n\nAfter sort:-\n";
  sort(weights.begin(),weights.end());
  for(int i=0;i<14;i++){
    pair<int,pair<int,int > > p;
    p=weights[i];
    pair<int,int> t;
    t=p.second;
    cout<<"Edges="<<t.first<<","<<t.second;
    cout<<" Weight="<<p.first<<endl;
  }

  set<int> traversed;
  int ans=0;
  for(int i=0;i<vertex;i++){
    pair<int,pair<int,int > > p;
    p=weights[i];
    pair<int,int> t;
    t=p.second;
    if((traversed.count(t.first)==1 && traversed.count(t.second)==1)){
      continue;
    }
    else
    {
      traversed.insert(t.first);
        traversed.insert(t.second);
        ans+=p.first;
        cout<<"in betw ans,t.first,t.second="<<ans<<" "<<t.first<<" "<<t.second<<endl;
    }
  }
  cout<<"\nans="<<ans;
}
