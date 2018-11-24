#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
    int ans[n][n];
    ans[0][0]=max(1,arr[0][0]);
    for(int i=1;i<n;i++){
        ans[0][i]=max(arr[0][i],ans[0][i-1]);
    }
    for(int i=1;i<n;i++){
        ans[i][0]=max(arr[i][0],ans[i-1][0]);
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
        ans[i][j]=arr[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            ans[i][j]=max(min(ans[i][j-1],ans[i-1][j]),ans[i][j]);
           // cout<<"i,j="<<i<<" , "<<j<<"= "<<ans[i][j]<<endl;
        }
    }
    cout<<ans[n-1][n-1];
  /* cout<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
  } */
  /*cout<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }*/
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
