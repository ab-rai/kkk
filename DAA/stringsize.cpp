#include <bits/stdc++.h>
using namespace std;
int main(){
  string str[]={"hello","h","helllo ji mera naam hai abhishek i mera naam hai abhishek aur mai hu hero"};
      cout<<str[0]<<endl;
     for(int i=0;i<sizeof(str)/sizeof(str[0]);i++)
      cout<<i<<"="<<str[i]<<endl;

      cout<<endl<<sizeof(str)<<endl;
      cout<<sizeof(str[0])<<endl;
      cout<<sizeof(str[1])<<endl;
      cout<<sizeof(str[2])<<endl;
}
