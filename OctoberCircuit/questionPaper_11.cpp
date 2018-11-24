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
    set<int>::iterator head;
    set<int>::iterator nexthead;

    nexthead=head=st.begin();

    for(int j=1;j<=n;j++){
    set<int> tempSt;
    set<int>::iterator l;
    cout<<"original set at start:- ";
    for(l=st.begin();l!=st.end();++l)
      cout<<*l<<",";
    cout<<endl;

    for(it=head;it!=st.end();++it){

      cout<<"j="<<j<<" & st= "<<*it<<endl;
      //cout<<"*it="<<*it<<"\t";
      t1=*it + a;
      t2=*it - b;
      t3=*it;
      cout<<"t1,t2,t3="<<t1<<","<<t2<<","<<t3<<"\n";
      tempSt.insert(t1);
      tempSt.insert(t2);
      tempSt.insert(t3);
      cout<<"tempSt= ";
      for(l=tempSt.begin();l!=tempSt.end();++l)
        cout<<*l<<",";
      cout<<endl;
    //  head=nexthead;
    //  nexthead=it;

      }
      head=nexthead;
      --it;
      nexthead=it;
      cout<<"$$$$ *nexthead,*head"<<*nexthead<<","<<*head<<endl;

      //head=st.end();
    st.insert(tempSt.begin(),tempSt.end());

    cout<<"original set at END:- ";
    for(l=st.begin();l!=st.end();++l)
      cout<<*l<<",";
    cout<<endl;
    }
    cout<<st.size()<<endl;
    }

}
