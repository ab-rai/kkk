//counting numbers of 1 in its binary form
#include<iostream>
using namespace std;
void possibleSubsets(char A[], int N)
  {
      for(int i = 0;i < (1 << N); ++i)
      {cout<<i<<" :- ";
          for(int j = 0;j < N;++j)
              if(i & (1 << j))
                  cout << A[j] << ' ';
          cout << endl;
      }
  }

int main(){
  int n,cnt=0;
  cout<<"Enter the no. ";
  cin>>n;
  char ch[n];
  for(int i=0;i<n;i++)
    cin>>ch[i];
  cout<<"Subsets are:- \n";
  possibleSubsets(ch,n);
}
