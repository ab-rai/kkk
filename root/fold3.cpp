#include<bits/stdc++.h>
using namespace std;
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
struct Fraction{
  long long num,den;
};
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
      }

int main(){
  int t;
  cin>>t;
  int n[t];
  for(int i=0;i<t;i++)
    cin>>n[i];
  for(int i=0;i<t;i++){
    //double start=0.0,end=1.0,ans=0.0;
    Fraction start;
    start.num=0;
    start.den=1;
    Fraction end;
    end.num=1;
    end.den=1;
    Fraction half;
    half.num=1;
    half.den=2;
    Fraction ans;
    for(int j=1;j<=n[i];j++){
      if(j%2==0){
        //start=start+(end-start)*HALF;
        start=myadd(start,mymultiply(mysubs(end,start),half));
        }
//      else end=start+(end-start)*HALF;
        else end=myadd(start,mymultiply(mysubs(end,start),half));
    //  cout<<"\nstart,end="<<start<<","<<end<<endl;
      }
    if(n[i]%2!=0){
      //ans=end;
      ans.num=end.num;
      ans.den=end.den;
      }
    else{
        //ans=start;
        ans.num=start.num;
        ans.den=start.den;
        }
    //  cout<<"ans.num,ans.den="<<ans.num<<","<<ans.den<<endl;
    cout<<ans.num<<" "<<ans.den<<" ";
    }
}
