#include<iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> s1; // declaring unordered_set
    unordered_set<int> :: iterator it; // iterator for unordered_set

    for(int i=0;i<5;i++){
        s1.insert(i*10); // inserting using Method1
    }

    it= s1.begin();
    s1.insert(it,99);

    int ary[]= { 23, 34, 45, 56};
    s1.insert(ary, ary+4); // Inserting using method3

    //checking by printing
    for(it= s1.begin(); it!=s1.end(); it++) cout << *it << " ";

    // We can observe that output will be print in sorted order. That is the property of Unordered_set

    return 0;
}
