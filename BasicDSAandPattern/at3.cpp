#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int x[n];
for (int i = 0; i < n; i++)
{
    cin>>x[i];
}

int sum=0;
for (int j = 0; j < n; j++)
{
    sum=sum+x[j];
}
cout<<sum;




return 0;
}