//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int myFast(long long n,long long a[],long long b[]){
  int flag=0;
  int r=n-1;
  if(n==1 && a[0]==b[0]){
    return 1;
  }
  if(n==2 && a[0]==b[0] && b[1]==b[2]){
    return 1;
  }

  while(r!=1){//will see for 0,1,2 in last
    if(a[r]+2>=b[r] && a[r]!=b[r]){
      //cout<<"NIE"<<endl;
      //flag=1;
      //break;
      return 0;
    }
    else if(a[r]==b[r]){
      while(a[r]==b[r] && r!=1)
        {
        //  cout<<" in equal a[r],b[r]="<<a[r]<<","<<b[r]<<" r="<<r<<endl;
          r--;
        }
    }
    else{
    //  cout<<"a[r],b[r]="<<a[r]<<","<<b[r]<<" r="<<r<<endl;

      int t=floor((b[r]-a[r])/3);
      //while(a[r]+2<=b[r])
        {
        a[r]+=t*3;
        a[r-1]+=t*2;
        a[r-2]+=t;
        }
      //  cout<<"a[r],b[r]="<<a[r]<<","<<b[r]<<" r="<<r<<" t="<<t<<endl;

    }
  }
  if(a[0]==b[0] && a[1]==b[1] && flag==0)
    //cout<<"TAK"<<endl;
    return 1;
  }

int myNieve(long long n,long long a[],long long b[]){
  int flag=0;
  int r=n-1;
  while(r!=1){//will see for 0,1,2 in last
    if(a[r]+2>=b[r] && a[r]!=b[r]){
      //cout<<"NIE"<<endl;
      return 0;
      //flag=1;
    //  break;
      }
    else if(a[r]==b[r]){
      while(a[r]==b[r] && r!=1)
        {
          //cout<<"a[r],b[r]="<<a[r]<<","<<b[r]<<" r="<<r<<endl;
          r--;
        }
      }
      else{
        a[r]+=3;
        a[r-1]+=2;
        a[r-2]+=1;
      }
    }
    if(a[0]==b[0] && a[1]==b[1] && flag==0)
    //cout<<"TAK"<<endl;
      return 1;
  }

int main(){
  long long t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long n;
    //int flag=0,temp;
    cin>>n;
    long long a[n],b[n];
    int flag=0;
    for(int i=0;i<n;i++){
      //cin>>a[i];
      srand(time(0));
      a[i] = rand() % (200 - 1) + 100;
    }
    for(int i=0;i<n;i++){
     cin>>b[i];
      srand(time(0));
      b[i] = rand() % (200 - 1) + 100;
    }
    long long t1[n],t2[n],t3[n],t4[n];
    for(int i=0;i<n;i++){
      t3[i]=t1[i]=a[i];
      t2[i]=t4[i]=b[i];
    }

    int ans1=myNieve(n,t1,t2);
  //  if(ans==1)
    //cout<<"TAK"<<endl;
    //else cout<<"NIE"<<endl;
    int ans2=myFast(n,t3,t4);
    if(ans1==ans2)
    cout<<"Both same"<<endl;
    else cout<<"Different"<<endl;
  //  if(ans==1)
  //  cout<<"TAK"<<endl;
    //else cout<<"NIE"<<endl;
  }
}
