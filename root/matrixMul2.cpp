#include<bits/stdc++.h>
# define INFI 98765432
using namespace std;
int n;
int matrixCalc(int arr[]){
//  int n=size-1;
  int m[n][n];
  for(int i=0;i<n;i++)
    m[i][i]=0;
  for(int l=1;l<=n;l++){
    for(int i=0;i<n-l+1;i++){
      int j=i+l;
      m[i][j]=INFI;
      for(int k=i;k<j;k++){
        int q=m[i][k]+m[k+1][j]+(arr[i-1]*arr[k]*arr[j]);
        cout<<"i,k,j="<<i<<","<<k<<","<<j<<endl;
        cout<<"m[i][k],m[k+1][j],arr[i-1],arr[k],arr[j]="<<m[i][k]<<",";
        cout<<m[k+1][j]<<","<<arr[i-1]<<","<<arr[k]<<","<<arr[j]<<endl;
        if(q<m[i][j]){
          m[i][j]=q;

        }
      }
    }
  }
  cout<<"m matrix is:-\n";
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      cout<<"i,j="<<i<<" , "<<j<<" = "<<m[i][j]<<";"<<"\t";
    }
    cout<<endl;
  }
  int ans=m[n][0];
  return ans;
}
int main(){
  //int n;
  cout<<"Enter the toatal number of matrix:- ";
  cin>>n;
  int arr[n+1];
  cout<<"Enter the elements for calculating minimum operation:-\n";
  cout<<"for 2 x 3 ,3 x 4 only enter 2,3,4\n";
  for(int i=0;i<=n;i++){
    cin>>arr[i];
  }
  //int m[n][n];

  int ans=matrixCalc(arr);
  cout<<"\n ans="<<ans;
}
