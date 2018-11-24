#include<iostream>
#include<queue>
using namespace std;
void showQueue(queue <int> mq){
  queue <int> tempQueue=mq;
  while(!tempQueue.empty()){
    cout<<tempQueue.front()<<endl;
    tempQueue.pop();
  }
  cout<<endl;
}
int main(){
  queue <int> mq;
  int op;
  cout<<"Choose from below options:- ";
do{
  cout<<"\n1-enqueue\t2-dequeue\t0-exit\n";
  cin>>op;
  switch(op){
    case 1:cout<<"Enter the number to push:-";
           int n;
           cin>>n;
           mq.push(n);
           showQueue(mq);
           break;
    case 2:cout<<"Deleted element is:-"<<mq.front();
          mq.pop();
           showQueue(mq);
           break;


  }
  cout << "\ngquiz.size() : " << mq.size();
   cout << "\ngquiz.front() : " << mq.front();
   cout << "\ngquiz.back() : " << mq.back();

}while(op!=0);
}
