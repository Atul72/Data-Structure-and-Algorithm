#include<iostream>
using namespace std;
// Some multiple choice questions
int main(){
  {  int a,b=1;
    a=10;
    if(++a)
        cout<<b;
    
    else 
        cout<<++b; 
  }
}