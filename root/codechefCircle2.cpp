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

  for(int i=0;i<q;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
      for(int k=j+1;k<n;k++){
        int r1,r2;
        if(r1>r2){
          int temp=r2;
          r2=r1;
          r1=temp;
        }
        r1=circles[j][2];
        r2=circles[k][2];
        double d=distance(circles[j][0],circles[j][1],circles[k][0],circles[k][1]);
        if(d>r1+r2){
          if(queries[i]>=(d-r1-r2) && queries[i]<=(d+r1+r2)){
            cnt++;
          }
        }
        else if(d+r1<r2){

          if(queries[i]>=(r2-d-r1) && queries[i]<=(d+r1+r2)){
            cnt++;
          }
        }
        else{
          if(queries[i]>=0 && queries[i]<=r2+r1+d){
            cnt++;
          }
        }

      }
    }
    if(i==0)
      cout<<cnt;
    else cout<<endl<<cnt;
  }
}
