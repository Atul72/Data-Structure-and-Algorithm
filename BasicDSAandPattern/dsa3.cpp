#include<iostream>
using namespace std;

int main(){
   char check;
   cout<<"Enter the character"<<endl;
   cin>>check;

   if(check>='a' && check<='z'){
       cout<<"This is lower case"<<endl;

   }
   else if(check>='A' && check<='Z'){
       cout<<"This is upper case"<<endl;
   }
   else {
       cout<<"This is numeric"<<endl;
   }
}