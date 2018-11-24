#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m,k,l;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>m>>k>>l;
    int a[n];
    for(int j=0;j<n;j++){
      cin>>a[j];
      }
    sort(a,a+n);
    long long con=m*l,min,trav=-1;
    min=99999999;
    for(int j=0;j<n;j++){
      if(a[j]>k){
        trav=j;
        break;
        }
        trav=j;

      cout<<"calc,min="<<con-a[j]+(j+1)*l<<" , "<<min<<endl;
      if(con-a[j]+(j+1)*l<min ){
        min=con-a[j]+(j+1)*l;
      cout<<"min="<<min<<endl;
        }
      }
      if(trav!=-1  && (con-k+(trav+2)*l)<min){
        cout<<"in last if before min="<<min<<"\n";

        min=(con-k+(trav+2)*l);
        cout<<"in last if min="<<min<<"\n";
      }
      else if((con-k+(trav+2)*l)<min){
        cout<<"in last if before min="<<min<<"\n";

        min=(con-k+(trav+2)*l);
        cout<<"in last if min="<<min<<"\n";

      }

      cout<<min<<endl;
    }
}
