#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
  long long t,n,k;
  cin>>t;
  for(long long i=0;i<t;i++){
    long long submi=1;

    cin>>n>>k;
    long long ans[k];

    if(n<(k*k+k)/2)
        {cout<<-1<<endl; continue;}
    else{
        long long mean=floor(n/k);
        // long long rem=n-k*mean;
        long long rem = n%k;
        if(k%2!=0){
          int ind=0;
          for(long long i=(-1*floor(k/2));i<=floor(k/2);i++){
            ans[ind]=(mean+i);
            ind++;
          //  cout<<mean+i<<" , ";
            }
            long long cnt=rem;
            for(long long i=k-1;cnt>0;i--){
          //    if (i < ans.size())
              {
                ans[i]++;
                cnt--;
              }
            }
          }

        else{int ind=0;
          for(long long i=-1;i>=(long long)(-1*floor(k/2));i--){
            ans[ind]=(mean+i);
            ind++;
        //    cout<<mean+i<<" , ";
            }
          for(long long i=floor(k/2);i>0;i--){
            ans[ind]=(mean+i);
            ind++;
        //    cout<<mean+i<<" , ";
            }
            long long cnt=rem;
            for(long long i=0;cnt>0;i++){
            //  if (i < ans.size())
              {
                ans[i]++;
                cnt--;
              }
            }

          }
          for(long long i=0;i<k;i++){
            // if (i < ans.size())
            // {

            submi = ((submi % MOD) * (ans[i] % MOD))%MOD * ((ans[i]%MOD) - 1);
            submi %= MOD;
            // }
            // submi=(submi*ans[i])%MOD*(ans[i]-1)%MOD;
          }
        }
        // cout << k << " " << ans.size() << endl;
        // cout<<"\nans vector is:- ";
        // for(long long i=0;i<k;i++){
        //   cout<<ans[i]<<" , ";
        // }

        cout<<submi%MOD<<endl;
    }
}
