#include<iostream>
using namespace std;

int main(){
     int i=1;
     int sum=0;
     while ( i<=10)
     /*{
        cout<<i<<endl;
        i++; 
     }*/
     {
        sum=sum+i;
        i=i+1;
     }
      cout<<sum;

    return 0;
}