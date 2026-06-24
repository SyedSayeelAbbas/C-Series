#include<iostream>
using namespace std;
int main(){

  // int i=1;

  // while (i<=5)
  // {
  //   cout<<"Before:"<<i<<endl;
  //   cout<<"Sayeel"<<endl;
  //   i++;
  //   cout<<"After:"<<i<<endl;
  // }

  // int j=1;
  // do{
  //   cout<<"Before:"<<j<<endl;
  //   cout<<"Sayeel"<<endl;
  //   j++;
  //   cout<<"After:"<<j<<endl;
  // }while(j>5);
  

  // for(int i=0;i<=5;i+=3){
  //   cout<<"Sayeel"<<endl;
  // }
  // for(int j=0;j<5;j++){
  //   for(int i = 0;i<=j;i++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // j is use for lines
// first time j =0 and i <=j each time for new line loop i will be 0
// first time j =1 and i <=j each time for new line loop i will be 0
// first time j =2 and i <=j each time for new line loop i will be 0


  for(int i =0 ; i<10 ;i++){
    if(i>=5){
      cout<<"Exit"<<endl;
      continue;
    }
    cout<<"running:"<<i<<endl;
    cout<<"running:"<<i<<endl;
    
  }
  return 0;
}
