#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
  char name[] = "sayeel";
  // cout<<strlen(name);
  // for(int i=0;i<strlen(name);i++){
  //   cout<<name[i];
  // }

  // char name1[20];
  // char name2[]="Sayeel";

  // strcpy(name1,name2);
  // cout<<name1;

  // char str1[]="hello ";
  // char str2[]="world";

  // strcat(str1,str2);
  // cout<<str1;


//   char str1[] = "sayel";
//   char str2[] = "sayel";

//   if (strcmp(str1, str2) == 0) {
//     cout << "Strings are equal";
// } else {
//     cout << "Strings are not equal"; // This will execute for "sayel" and "saim"
// }

  // string name1="Syed Abbas";
  // cout<<"Enter name:";
  // getline(cin,name1);
  // cout<<name1;
  // cout<<name1.length();
  // name1.append("Abbas");
  // name1.insert(4,"Sayeel");
  // name1.erase(4,6);
  
  // if("Sayeel"=="Sayeel"){
  //   cout<<"Equal";
  // }
  // else{
  //   cout<<"Unequal";
  // }

  string val;
  getline(cin,val);
  // cout<<val.length();
  string val2;
  for(int i = val.length()-1;i>=0;i--){
    val2+=val[i];
  }

  if(val==val2){
    cout<<"Palindrom";
  }else{
    cout<<"not plaindrom";
  }
  return 0;
}
