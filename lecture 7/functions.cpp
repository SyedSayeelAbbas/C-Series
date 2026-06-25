#include<iostream> 
using namespace std; 

// Functions with returns and parameters
int add(int a, int b){ 
    return a + b; 
} 

int sub(int a, int b){ 
    return a - b; 
} 

// Renamed from 'div' to 'divide' to prevent naming conflicts
float divide(int a, int b){ 
    return (float)a / b; 
} 

int mul(int a, int b){ 
    return a * b; 
} 

// Function with return and no parameters
int intro1(){ 
    cout << "Hi my name is Sayeel" << endl; 
    cout << "Age:20" << endl; 
    cout << "Hobby:Reading" << endl; 
    return 0; 
} 

// Function with no return and no parameters
void intro2(){ 
    cout << "Hi my name is Sayeel" << endl; 
    cout << "Age:20" << endl; 
    cout << "Hobby:Reading" << endl; 
} 

int change(int &value){
  value = 10;
  return value;
}

int detest(int a = 9){
  return a;
}

int factorial(int n){
    if(n==0 || n==1)
        return 1;

    return n * factorial(n-1);
}


int main(){ 
    // int a, b; 
    
    // cout << "Enter value 1: "; 
    // cin >> a; 
    
    // cout << "Enter value 2: "; 
    // cin >> b; 
    // cout << endl; 
    
    // // Displaying the results
    // cout << "Your Addition: " << add(a, b) << endl; 
    // cout << "Your Subtraction: " << sub(a, b) << endl; 
    // cout << "Your Multiplication: " << mul(a, b) << endl; 
    // cout << "Your Division: " << divide(a, b) << endl; 

  // int num = 1;
  // cout<<change(num)<<endl;
  // cout<<num<<endl;

  // cout<<detest()<<endl;

  cout<<factorial(4);

  
    
    return 0; 
}




