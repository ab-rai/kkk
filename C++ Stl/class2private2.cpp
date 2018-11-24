#include<bits/stdc++.h>
using namespace std;
class student{
private:
  int rollno,std;
  string name;
public:
  student(){
    rollno=-1;
    std=-1;
    strcpy(name,"");
  }
  void setRollno(int n){
    rollno=n;
  }
  void setStd(int n){
    std=n;
  }
  void setName(string s){
    name=s;
  }
  int getRollno(){
    return rollno;
  }
  int getStd(){
    return std;
  }
  string getName(){
    return name;
  }
};
int main(){
  student s;
  int rollno,std;
  string name;
  cout<<"Helllo\n";
  cout<<s.getRollno()<<" , "<<s.getStd()<<" , "<<s.getName()<<" , "<<endl;
  cout<<"Enter rollno,std,name:-\n";
  cin>>rollno>>std>>name;
  s.setRollno(rollno);
  s.setStd(std);
  s.setName(name);
  cout<<s.getRollno()<<" , "<<s.getStd()<<" , "<<s.getName()<<" , "<<endl;

}
