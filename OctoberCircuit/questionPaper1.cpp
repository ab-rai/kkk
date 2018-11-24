#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,a,b;
    cin>>n>>a>>b;
    int t1,t2,t3;
    set<int> st;
    st.insert(0);
    set<int>::iterator it;

    for(int j=1;j<=n;j++){
    set<int> tempSt;
    set<int>::iterator l;

    for(it=st.begin();it!=st.end();++it){

      t1=*it + a;
      t2=*it - b;
      t3=*it;
      tempSt.insert(t1);
      tempSt.insert(t2);
      tempSt.insert(t3);
      }
    st.insert(tempSt.begin(),tempSt.end());
    }
    cout<<st.size()<<endl;
    }

}
