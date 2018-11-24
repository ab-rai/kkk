#include<iostream>
using namespace std;
int fun(int=10,int=3);
int main(){
  cout<<fun(5,9);
  return 0;
}
int fun(int x,int y){
  return (x+y);
}
