#include<bits/stdc++.h>
using namespace std;

map<int,int >mpr;
void uniqueElement(int arr[],int size){
    
    for(int i=0;i<size;i++){
        mpr[arr[i]]++;
    }
    for (auto it:mpr){
        cout<<it.first<<"->"<<it.second<<endl;
        if(it.second==1){
            cout<<it.first;
            break;
        }
      } 

}
void printResult(int arr[],int size){
    cout<<
    
}


int main(){
     int n;
     cin>>n;
     int arr[n];

     for (int i=0; i<n;i++){
         cin>>arr[i];
     }
     uniqueElement(arr,n);

}
