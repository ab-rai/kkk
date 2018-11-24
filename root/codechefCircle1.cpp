#include<bits/stdc++.h>
using namespace std;
double distance(long long x1,long long y1,long long x2,long long y2){
  return sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
}
int main(){
  long long n,q;
  cin>>n>>q;
  //vector <int > circles(n,3);
  //vector <int> queries(q);
  int circles[n][3],queries[q];

  for(int i=0;i<n;i++){
    cin>>circles[i][0]>>circles[i][1]>>circles[i][2];
  }
  for(int i=0;i<q;i++){
    cin>>queries[i];
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<"Distance between "<<i<<" and "<<j<<" circles are= ";
      cout<<distance(circles[i][0],circles[i][1],circles[j][0],circles[j][1])<<endl;
    }
  }
}
