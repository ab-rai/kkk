#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n,m,k,l;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>m>>k>>l;
    long long a[n];
    for(int j=0;j<n;j++){
      cin>>a[j];
      }
    sort(a,a+n);
    long long con=m*l,min,trav=-1;
    min=999999999999999;
    for(int j=0;j<n;j++){
      if(a[j]>k){
        trav=j;
        break;
        }
        trav=j;

      if(con-a[j]+(j+1)*l<min ){
        min=con-a[j]+(j+1)*l;
        }
      }
      if(trav!=-1  && (con-k+(trav+2)*l)<min){

        min=(con-k+(trav+2)*l);
      }
      else if((con-k+(trav+2)*l)<min){

        min=(con-k+(trav+2)*l);
      }

      cout<<min<<endl;
    }
}
