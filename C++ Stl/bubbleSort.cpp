#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int s){
  int t;
//  cout<<"SIze="<<sizeof(arr)<<endl;
  //int s=sizeof(arr)/sizeof(arr[0]);
  for(int i=1;i<s;i++){
    for(int j=0;j<s-i;j++){
      if(arr[j+1]<arr[j]){
        t=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=t;
      }
    }
  }
}
void insertionSort(int arr[],int s){
  int j,t;
  for(int i=1;i<s;i++){
    j=i-1;
    t=arr[i];
    while(j>=0 && arr[j]>t){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=t;
  }
}

int main(){
  int arr[]={3,2,4,1,5,5,6,4,3,4},s=sizeof(arr)/sizeof(int);
  int a[10],b[10];
  for(int i=0;i<s;i++){
    a[i]=b[i]=arr[i];
  }
  bubbleSort(a,s);
  insertionSort(b,s);
  cout<<"\n Original array:- ";
  for(int i=0;i<s;i++)
    cout<<arr[i]<<" ";
    cout<<"\n BubbleSorted array:- ";
    for(int i=0;i<s;i++)
      cout<<a[i]<<" ";
      cout<<"\n InsertionSorted array:- ";
    for(int i=0;i<s;i++)
    cout<<b[i]<<" ";

}
