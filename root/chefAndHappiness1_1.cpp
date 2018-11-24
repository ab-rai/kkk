#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int stop=0;

    int n;
    cin>>n;
    vector <int> a(n);
    for(int j=0;j<n;j++)
      cin>>a[j];
    vector <pair<int,int> > mv;
    for(int j=0;j<n;j++)
      mv.push_back(pair<int,int> (a[j],j));
      /*for(int j=0;j<n;j++){
        pair <int,int> p=mv[j];
        cout<<"mv[j][1],mv[j][0]="<<p.second<<" "<<p.first<<endl;
      }*/
      sort(mv.begin(),mv.end());
      /*cout<<"after sorting:-\n";
      for(int j=0;j<n;j++){
        pair <int,int> p=mv[j];
        cout<<"mv[j][1],mv[j][0]="<<p.second<<" "<<p.first<<endl;
        */
        for(int j=0;j<n-1;j++){
          pair <int,int> p=mv[j],q=mv[j+1];
        if(p.first==q.first){
          int flag=0,flag1=0,flag2=0;
          for(int k=0;k<n;k++){
              pair <int,int> t=mv[k];
              cout<<"start:-(p.second)+1,(q.second)+1,t.first="<<(p.second)+1<<","<<(q.second)+1;
              cout<<","<<t.first<<endl;
              cout<<"flag,flag1,flag2="<<flag<<","<<flag1<<","<<flag2<<endl;
              if((p.second)+1==t.first && flag1==0){
                flag++;
                flag1++;
                }
                else if((q.second)+1==t.first && flag2==0){
                  flag++;
                  flag2++;
                  }

                cout<<"end:-(p.second)+1,(q.second)+1,t.first="<<(p.second)+1<<","<<(q.second)+1;
                cout<<","<<t.first<<endl;
                cout<<"flag,flag1,flag2="<<flag<<","<<flag1<<","<<flag2<<endl;
                if(flag==2)
                  break;

                }
          if(flag==2){
            stop=1;
            cout<<"Truly Happy"<<endl;
            break;
            }
          }
        }
        if(stop==0)
        cout<<"Poor Chef"<<endl;
    }
}
