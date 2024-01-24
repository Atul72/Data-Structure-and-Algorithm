#include<iostream>
using namespace std;

 
 int fact(int n){
    int facii=1;
    for (int i = 1; i <=n ; i++)
    {
        facii=facii*i;
    }
    return facii;
    
 }

int main(){
    int n,r;
    cout<<"Enter the numbers "<<endl;
    cin>>n>>r;
    int ans= (fact(n)/fact(r)*fact(n-r));
    cout<<ans; 

return 0;
}