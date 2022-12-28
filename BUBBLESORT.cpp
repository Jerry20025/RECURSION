#include <iostream>

using namespace std;

void bubble(int arr[], int n){
    if(n==0){
        return ; 
    }
    for(int i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]); 
        }
    }
    bubble(arr,n-1);
}

int main()
{
    int arr[]={1,5,2,3,4,0,2,3,4,56,3,2,4,5,2,5,3,9}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    bubble(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
