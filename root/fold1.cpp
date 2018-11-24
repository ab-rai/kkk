#include<bits/stdc++.h>
using namespace std;
#define HALF 0.5
#define MULTIPLE 1000000000000000
int myHcf(long long a,long long b){
  if(a>b){
    long long temp;
    temp=a;
    a=b;
    b=temp;
  }
  if(a==0)
    return b;
  else return myHcf(b%a,a);
}
int myLcm(long long a,long long b){
  return (a*b)/myHcf(a,b);
}
class Fraction{
public:

  long long num,den;
  Fraction(long long n,long long d){
    num=n;
    den=d;
  }
  Fraction myadd(Fraction f1,Fraction f2){
      Fraction temp;
      temp.den=myLcm(f1.den,f2.den);
      temp.num=(temp.den/f1.den*f1.num)+(temp.den/f2.den*f2.num);
      long long divisor;
      divisor=myHcf(temp.den,temp.num);
      temp.den/=divisor;
      temp.num/=divisor;
      return temp;
    }
    Fraction mysubs(Fraction f1,Fraction f2){
          Fraction temp;
          temp.den=myLcm(f1.den,f2.den);
          temp.num=(temp.den/f1.den*f1.num)-(temp.den/f2.den*f2.num);
          long long divisor;
          divisor=myHcf(temp.den,temp.num);
          temp.den/=divisor;
          temp.num/=divisor;
          return temp;
        }
    Fraction mymultiply(Fraction f1,Fraction f2){
          Fraction temp;
          temp.den=f1.den*f2.den;
          temp.num=f1.num*f2.num;
          return temp;
};

int main(){
  int t;
  cin>>t;
  int n[t];
  for(int i=0;i<t;i++)
    cin>>n[i];
  for(int i=0;i<t;i++){
    //double start=0.0,end=1.0,ans=0.0;
    Fraction start(0,1);
    Fraction end(1,1);
    Fraction half(1,2);
    Fraction ans();
    for(int j=1;j<=n[i];j++){
      if(j%2==0){
        //start=start+(end-start)*HALF;
        start=mysum(start,mymultiply(mysubs(end,start),half));
        }
//      else end=start+(end-start)*HALF;
        else end=mysum(start,mymultiply(mysubs(end,start),half));
    //  cout<<"\nstart,end="<<start<<","<<end<<endl;
      }
    if(n[i]%2!=0){
      ans=end;
      }
    else ans=start;
      cout<<"ans.num,ans.den="<<ans.num<<","<<ans.den<<endl;
  //  cout<<ans.num<<" "<<ans.den<<" ";
    }
}
