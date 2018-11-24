#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
  long long t,n,k;
  cin>>t;
  for(long long i=0;i<t;i++){
    vector <long long> ans;
    cin>>n>>k;
    if(n<(k*k+k)/2)
        {cout<<-1<<endl; continue;}
    else{
        long long mean=floor(n/k);
        // long long rem=n-k*mean;
        long long rem = n%k;
        if(k%2!=0){
          for(int i=(-1*floor(k/2));i<=floor(k/2);i++){
            ans.push_back(mean+i);
          //  cout<<mean+i<<" , ";
            }
            int cnt=rem;
            for(int i=k-1;cnt>0;i--){
              if (i < ans.size())
              {
                ans[i]++;
                cnt--;
              }
            }
          }

        else{
          for(int i=-1;i>=(int)(-1*floor(k/2));i--){
            ans.push_back(mean+i);
        //    cout<<mean+i<<" , ";

            }
          for(int i=floor(k/2);i>0;i--){
            ans.push_back(mean+i);
        //    cout<<mean+i<<" , ";
            }
            int cnt=rem;
            for(int i=0;cnt>0;i++){
              if (i < ans.size())
              {
                ans[i]++;
                cnt--;
              }
            }

          }
        }
        // cout << k << " " << ans.size() << endl;
        // cout<<"\nans vector is:- ";
        // for(int i=0;i<k;i++){
        //   cout<<ans[i]<<" , ";
        // }
        long long submi=1;
        for(int i=0;i<k;i++){
          // if (i < ans.size())
          // {

          submi = (submi % MOD) * (ans[i] % MOD) * ((ans[i]%MOD) - 1);
          submi %= MOD;
          // }
          // submi=(submi*ans[i])%MOD*(ans[i]-1)%MOD;
        }
        cout<<submi%MOD<<endl;
    }
}
