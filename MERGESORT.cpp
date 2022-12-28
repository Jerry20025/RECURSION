#include <iostream>

using namespace std;
void merge(int arr[], int s, int e){
    int mid=(s+e)/2; 
    int k=s; 
    int size1=mid-s+1; 
    int size2=e-mid; 
    int *first= new int[size1]; 
    int *second=new int[size2]; 
    for(int i=0;i<size1;i++){
        first[i]=arr[k++]; 
    }
    //  k=mid+1;
    for(int i=0;i<size2;i++){
        second[i]=arr[k++]; 
         
    }
    int index1=0,index2=0; 
    int mainindex=s; 
    while(index1<size1 && index2<size2){
        if(first[index1]<second[index2]){
            arr[mainindex++]=first[index1++]; 
        }
        else{
            arr[mainindex++]=second[index2++];
        }
    }
    while(index1<size1){
        arr[mainindex++]=first[index1++]; 
    }
    while(index2<size2){
        arr[mainindex++]=second[index2++];
    }

}
void mergesort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid =(s+e)/2; 
    mergesort(arr,s,mid); 
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int arr[]={1,5,2,3,4,0,2,3,4,56,3,2,4,5,2,5,3,9}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    mergesort(arr,0,n-1); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
