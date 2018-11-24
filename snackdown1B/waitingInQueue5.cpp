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
    long long con=m*l,min;
    min=con;
    for(int j=0;j<n;j++){
    //  cout<<"calc,min="<<con-a[j]+(j+1)*l<<" , "<<min<<endl;
      if(con-a[j]+(j+1)*l<min){
        min=con-a[j]+(j+1)*l;
      //  cout<<"min="<<min<<endl;
        }
      }
      cout<<min<<endl;
    }
}
