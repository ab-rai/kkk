#include<bits/stdc++.h>
# define INFI 99999999
using namespace std;
//int n;
/*
void matrixCalc(int m[2][2],int arr[],int n){
//  int n=size-1;
  //int m[n][n];
  for(int i=0;i<=n;i++)
    m[i][i]=0;
  for(int l=1;l<=n;l++){
    for(int i=0;i<=n-l+1;i++){
      int j=i+l-1;
      m[i][j]=INFI;
      for(int k=i;k<j-1;k++){
        int q=m[i][k]+m[k+1][j]+(arr[i-1]*arr[k]*arr[j]);
        if(q<m[i][j]){
          m[i][j]=q;

        }
      }
    }
  }
}
*/
int main(){
  int n;
  cout<<"Enter the toatal number of matrix:- ";
  cin>>n;
  int arr[n+1];
  cout<<"Enter the elements for calculating minimum operation:-\n";
  cout<<"for 2 x 3 ,3 x 4 only enter 2,3,4\n";
  for(int i=0;i<=n;i++){
    cin>>arr[i];
  }

    int m[n][n];
    int s[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      s[i][j]=-1;
      }
    }
  for(int i=0;i<n;i++)
    m[i][i]=0;

      for(int l=1;l<n;l++){
    for(int i=0;i<=n-l-1;i++){
      int j=i+l;
      m[i][j]=INFI;
      for(int k=i;k<=j-1;k++){
        int q=m[i][k]+m[k+1][j]+(arr[i]*arr[k+1]*arr[j+1]);
        if(q<m[i][j]){
          m[i][j]=q;
          s[i][j]=k;
        }
      }
    }
  }
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)
  cout<<m[i][j]<<" ";
  cout<<endl;
  }
  cout<<"\nPartition matrix:-\n";
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)
  cout<<s[i][j]<<" ";
  cout<<endl;
  }
  cout<<"minimum number of operation="<<m[0][n-1];
  //matrixCalc(m,arr,n);
}
