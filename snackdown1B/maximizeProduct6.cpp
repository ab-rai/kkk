#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n,k;
  cin>>t;
  for(long long i=0;i<t;i++){
    vector <long long> ans;
    cin>>n>>k;
    if(n<(k*k+k)/2)
        cout<<-1<<endl;
    else{
        long long mean=floor(n/k);
        long long rem=n-k*mean;
        if(k%2!=0){
          for(int i=(-1*floor(k/2));i<=floor(k/2);i++){
            ans.push_back(mean+i);
          //  cout<<mean+i<<" , ";
            }
            int cnt=rem;
            for(int i=k-1;cnt>0;i--){
              ans[i]++;
              cnt--;
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
              ans[i]++;
              cnt--;
            }

          }
        }

  /*      cout<<"\nans vector is:- ";
        for(int i=0;i<k;i++){
          cout<<ans[i]<<" , ";
        }*/
        long long submi=1;
        for(int i=0;i<k;i++){
          submi*=(ans[i]*ans[i]-ans[i]);
        }
        cout<<submi%1000000007<<endl;
    }
}
