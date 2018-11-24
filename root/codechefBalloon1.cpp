#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,min=0,max=-999,temp;//check by applying min=min(in array)
  cin>>n>>m;
  //vector <long long> a(n),b(n);
  vector <long long> a(n),ad(n);
  vector <long long> b(n),bd(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  for(int i=0;i<n;i++){
    temp=a[i]*b[i];
    if(temp>max)
      max=temp;
  }
  long long mid,di,i,ans;
  int flag;
  while(min<=max){
    mid=(max+min)/2;
    temp=m;
    //cout<<"min="<<min<<" max="<<max<<" mid="<<mid<<endl;
    for(i=0;i<n;i++){
      flag=0;
      di=mid/b[i];
      if(a[i]>di)
        temp=temp-(a[i]-di);
    //  cout<<"temp="<<temp<<" ";
        if(temp<0)
          flag=1;
    }
  //  cout<<endl;
    if(flag==0){
      max=mid-1;
      ans=mid;
    }
    else{
      min=mid+1;
    }

  }
  cout<<ans;
}
