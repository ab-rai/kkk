#include<iostream>
//#define ll long long
using namespace std;
int digitSum(long long);
//int mylog(long long);
int digitSum(long long);


  int myLog(long long n){
    int ans=0;
    while(n!=0){
      ans++;
      n=n/2;
      //cout<<"ans= "<<ans<<" n="<<n<<endl;
    }
    return ans;
  }

void enqueue(long long n,long long queue,long long *front,long long *rear){
  if(*front==-1 && *rear==-1){
    queue[++(*front)]=n;
    ++(*rear);
  }
  else  queue[++(*front)]=n;
}
int dequeue(){
  return queue[(*rear)++];
}


int main(){
  long long n,d,min,minIndex,k;
  //cout<<"enter n and d";
  int t;
  cin>>t;
  for(int r=0;r<t;r++){
    long long queue[100000],front=-1,rear=-1;

  cin>>n>>d;
  min=n;
  minIndex=0;
  enqueue(n,queue,&front,&rear);

     for(int i=1;i<50000;i++){
    k=dequeue(queue,&front,&rear);
      if(digitSum(k)<min){
      minIndex=front+1;
      min=digitSum(k);
    }
      enqueue(digitSum(k),queue,&front,&rear);
    //  cout<<"front="<<front<<" rear="<<rear<<" i="<<i<<" min="<<min<<" minIndex="<<minIndex;
      //cout<<" digitsum="<<digitSum(k)<<endl;

      if(k+d <min){
      minIndex=front+1;
      min=k+d;
    }
      enqueue(k+d,queue,&front,&rear);
      //cout<<"front"<<front<<" rear="<<rear<<" i="<<i<<" min="<<min<<" minIndex="<<minIndex;
      //cout<<" n+d="<<k+d<<endl;

    }
    cout<<min<<" "<<myLog(minIndex+1)-1<<endl;
  }
  }


int digitSum(long long n){
  long long ans=0;
  while(n!=0){
    ans=ans+n%10;
    n=n/10;
  }
  return ans;
}
