#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[],int n){
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        if(start<=end){
       swap(arr[start],arr[end]);}
       start++;
       end--;
    }
}
void printArray(int arr[],int n){
    cout<<"After reversing"<<endl;
    for(int i=0;i<n;i++){
    
    cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     revArray(arr,n);
     printArray(arr,n);

}