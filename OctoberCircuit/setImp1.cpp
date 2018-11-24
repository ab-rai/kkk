#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  set <int> st;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    st.insert(n);
    cout<<"Latest set is:- ";
    set<int> ::iterator j;
    for(j=st.begin();j!=st.end();++j){
    cout<<*j<<",";
      }
    }
}
