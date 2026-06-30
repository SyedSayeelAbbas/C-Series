// oop: object orientated programming -> (object and classes)
// concept function == opp but design structure == oop
// In basic sense a function is limited to one functionality but class has multiple functions

// humans -> class
// using class we make objects and that objects can then have different features etc
// humans -> class -> object -> specific human
#include<iostream>
using namespace std;

class Human{
  private:
    static int eye,arms,leg;
    static string name;
    static string account;
  public:

    // Human(){

    // }

    Human(int eye,int arms,int leg,string name,string account){
      this->eye=eye;
      this->arms=arms;
      this->leg=leg;
      this->name=name;
      this->account=account;
    }

    ~Human(){
      
    }

    // Human(int eye,int arms,int leg,string name){
    //   this->eye=eye;
    //   this->arms=arms;
    //   this->leg=leg;
    //   this->name=name;
    // }


    // void setName(string name){
    //   this->name=name;
    // }

    // void setEye(int eye){
    //   this->eye=eye;
    // }

    // void setArms(int arms){
    //   this->arms=arms;
    // }
    // void setLegs(int legs){
    //   leg=legs;
    
    
    // int getArm(){
    //   return this->arms;
    // }
    // int getLeg(){
    //   return this->leg;
    // }
    // int getEye(){
    //   return this->eye;
    // }
    // string getName(){
    //   return this->name;
    // }

    static void display(){
      cout<<"==============================================";
      cout<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Eye:"<<eye<<endl;
      cout<<"Arms:"<<arms<<endl;
      cout<<"Hands:"<<leg<<endl;
      cout<<"==============================================";
      cout<<endl;
    }
};

int Human::eye;
int Human::arms;
int Human::leg;
string Human::name;
string Human::account;

int main(){
  Human h1(2,2,2,"Sayeel","debit");
  // Human h2(2,2,2,"Saim");
  // Human h3;

  h1.display();

  // h3.setLegs(2);
  // h3.setName("ALi");

  // h3.display();


  // cout<<h3.getName()<<endl;
  // cout<<h3.getLeg()<<endl;
  return 0;
}


