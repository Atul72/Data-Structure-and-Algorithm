#include<bits/stdc++.h>
using namespace std;

void swapAlternates(int arr[],int n){
    int start=0;
    int i=0;
    int end =i+1;
    for(;i<n;i++){
        if(start<n && end<n){
            swap(arr[start],arr[end]);
        }
        start++;
        end++;
    }
}
void printArray(int arr[],int n){
    cout<<"After swaping alternate number"<<endl;
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
     swapAlternates(arr,n);
     printArray(arr,n);

}