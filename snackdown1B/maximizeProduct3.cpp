#include<bits/stdc++.h>
using namespace std;
int myRepair(long long arr[],long long n,long long sum,int s){
  long long dif=n-sum;
  if (dif==0)
    return 1;
  else if(dif<0){
      dif=(long long)(-1*dif);
      long long temp=1,subm,submInd,i=2;
    submInd=dif;
      for(i=0;i<submInd;i++){
        arr[i]--;
      }
      sum=0;
      for(i=0;i<s;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
      }

      cout<<"\nSum in else="<<sum<<endl;
      return myRepair(arr,n,sum,s);
    }
    else {
      //dif=(long long)(-1*dif);
      long long temp=1,subm,submInd,i=2;
      submInd=dif;
      for(i=s-1;i>(s-1)-submInd;i--){
        arr[i]++;
      }
      sum=0;
      for(i=0;i<s;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
      }
      cout<<"\nSum in else="<<sum<<endl;
      return myRepair(arr,n,sum,s);
    }
}
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
        cout<<"temp,pivot="<<temp<<" , "<<pivot<<endl;
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
            int ret=myRepair(arr,n,sum,k);
            sum=0;
            for(int j=0;j<k;j++)
              {
                cout<<arr[j]<<" ";
                  sum+=arr[j];
              }
              cout<<"final sum="<<sum<<endl;

      }
    }
}
