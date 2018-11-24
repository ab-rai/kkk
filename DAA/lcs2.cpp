//search and insert operations on Trie
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cin>>s1;
  cin>>s2;
  int i,n1,n2;
  n1=s1.length();
  n2=s2.length();
  int mat[n1+1][n2+1];
  for(i=0;i<=n1;i++){
    mat[i][0]=0;
    }
  for(i=0;i<=n2;i++){
    mat[0][i]=0;
    }
  for(i=1;i<=n1;i++){
    for(int j=1;j<=n2;j++){
      if(s1[i]==s2[j])
        mat[i][j]=mat[i-1][j-1]+1;
      else{
        mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
      }
  }
  cout<<"lcs="<<mat[n1][n2]<<endl;
}
