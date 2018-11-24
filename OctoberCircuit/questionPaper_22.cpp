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
    st.insert(0+a);
    st.insert(0-b);
    st.insert(0);

    set<int>::iterator it;
    set<int>::iterator l;
    set<int>::iterator head;
    set<int>::iterator nexthead;
    set<int>::iterator temp;
    head=st.begin();
    nexthead=--(st.end());
    cout<<"original set is :- ";
    for(l=st.begin();l!=st.end();++l)
      cout<<*l<<",";
    cout<<endl;

    cout<<"Atfirst *head,*nexthead="<<*head<<","<<*nexthead<<endl;

    for(int j=2;j<=n;j++){
    set<int> tempSt;
    set<int>::iterator l;

    for(it=head;it!=st.end();++it){

      t1=*it + a;
      t2=*it - b;
      t3=*it;
      tempSt.insert(t1);
      tempSt.insert(t2);
      tempSt.insert(t3);
      temp=it;
      }
      cout<<"original set is :- ";
      for(l=st.begin();l!=st.end();++l)
        cout<<*l<<",";
      cout<<endl;

      cout<<"before:- *head,*nexthead,*it="<<*head<<","<<*nexthead<<","<<*it<<endl;
      nexthead=temp;
      st.insert(tempSt.begin(),tempSt.end());
      ++nexthead;
      head=nexthead;
      cout<<"original set is :- ";
      for(l=st.begin();l!=st.end();++l)
        cout<<*l<<",";
      cout<<endl;

      cout<<"*After:- head,*nexthead="<<*head<<","<<*nexthead<<endl;

    }
    cout<<st.size()<<endl;
    }

}
