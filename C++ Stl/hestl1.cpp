#include<bits/stdc++.h>
#include<unordered_set>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        ll n,m;
        cout<<"program starts:-";
        cin>>n>>m;
        ll A[n+m];
        for(ll i=0;i<n+m;i++)
            cin>>A[i];
        unordered_set <ll> s;
        unordered_set <ll> ::iterator it;

        for(ll i=0;i<n;i++){
            s.insert(A[i]);
        }
        for(ll i=n;i<m+n;i++){
            if(s.count(A[i]))
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            s.insert(A[i]);
            for(it=s.begin();it!=s.end();it++)
              cout<<*it<<" ";
              cout<<endl;
        }

        t--;

    }
}
