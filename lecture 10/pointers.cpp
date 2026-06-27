#include<iostream>
using namespace std;

int change(int *val){
  *val=100;
}
int main(){
  // int num1 =20;
  // int *num2 = &num1;


  // cout<<"Data: "<<num1<<endl;
  // cout<<"Address: "<<num2<<endl;

  // int arr[]={1,2,3};

  // cout<<*(arr+1);//old arr[0]

  // for(int i=0;i<3;i++){
  //   cout<<*(arr+i)<<endl;
  // }

  // int *ptr = new int;
  // *ptr=50;
  // cout<<ptr;

  int size;
  cout<<"Enter size";
  cin>>size;
  int* arr =new int[size];

  return 0;
}
