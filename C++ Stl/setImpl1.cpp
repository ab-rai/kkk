#include<bits/stdc++.h>
using namespace std;
int main(){
  set <int> st;
  int i=0,n,t;

  cout<<"Size of the set:-"<<st.size()<<endl;
  cout<<"Enter the size of the set:-";
  cin>>n;
  cout<<"Enter the elements of the set:- ";
  for(i=0;i<n;i++){
    cin>>t;
    st.insert(t);
  }
  cout<<"Size of the set:-"<<st.size()<<endl;

  cout<<"ENter the element to search:-";
  cin>>t;
  auto ans=st.find(t);
  cout<<( ans!=st.end() ? "FOUND" :"Not found");

}
