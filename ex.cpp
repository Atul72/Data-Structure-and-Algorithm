#include<iostream>
using namespace std;


int main(){
    int arr[3]={1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (int i = 0; i <n ; i++)
    {
       arr[i]=arr[i]-2;
    }
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for (int k = 0; k < n; k++)
    {
        sum=sum+arr[k];
    }
    cout<<"The sum of array is "<<endl;
    cout<<sum;
    
    
    

return 0;
}