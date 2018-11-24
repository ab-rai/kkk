#include<iostream>
#define long long ll
using namespace std;
int digitSum(ll);
//int mylog(long long);
int digitSum(ll);
ll queue[100000],front=-1,rear=-1;
void enqueue(ll n){
  if(front==-1 && rear==-1){
    queue[++front]=n;
    ++rear;
  }
  else  queue[++front]=n;
}
void dequeue(){
  return queue[rear++];
}


int main(){
  long long n,d,min,minIndex,k;
  //cout<<"enter n and d";
  cin>>n>>d;
  min=n;
  minIndex=0;
  enqueue(n);


  int myLog(long long n){
    int ans=-1;
    while(n!=0){
      ans++;
      n=n/2;
      //cout<<"ans= "<<ans<<" n="<<n<<endl;
    }
    return ans-1;
  }


  for(ll i=1;i<100000;i++){
    k=dequeue();
    if(digitSum(k)<min){
    minIndex=front+1;
    min=k;
  }
    enqueue(digitSum(k));
    if(n+d <min){
    minIndex=front+1;
    min=k;
  }
    enqueue(n+d);
  }
  cout<<"numbers are:-"<<min<<" , "<<myLog(minIndex)+1;
}

int digitSum(ll n){
  long long ans=0;
  while(n!=0){
    ans=ans+n%10;
    n=n/10;
  }
  return ans;
}
