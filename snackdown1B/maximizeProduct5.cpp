#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n,k;
  cin>>t;
  for(long long i=0;i<t;i++){
    long long pivot;
    cin>>n>>k;
    if(n<(k*k+k)/2)
        cout<<-1<<endl;
    else{
        pivot=n/k;
        long long arr[k],temp;
        temp=(long long)(-1*(k-1)/2);
        int l=0;
    //    cout<<"temp,pivot="<<temp<<" , "<<pivot<<endl;
        for(long long j=temp;temp<=k/2;temp++){
          arr[l++]=pivot+temp;
          }
          long long sum=0;
          for(int j=0;j<k;j++)
            {
             cout<<arr[j]<<" ";
                sum+=arr[j];
            }
            cout<<"sum="<<sum<<endl;
          //  int ret=myRepair(arr,n,sum,k);
            //  cout<<ans%1000000007<<endl;
      }
    }
}
