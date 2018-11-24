#include<bits/stdc++.h>
using namespace std;
class student{
public:
  int rollno,std;
  string name;
};
int main(){
  student s;
  cout<<"Helllo\n";
  cout<<s.rollno<<" , "<<s.std<<" , "<<s.name<<" , "<<endl;
  cout<<"Enter rollno,std,name:-\n";
  cin>>s.rollno>>s.std>>s.name;
  cout<<s.rollno<<" , "<<s.std<<" , "<<s.name<<endl;
}
