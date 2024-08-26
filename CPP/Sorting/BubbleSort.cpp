#include<iostream>
#include<stdlib.h>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<=i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }            
        }
    }

    cout<<"\n"<<"After Bubble Sort: ";
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if (i!=n-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
}

int main(){
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the ["<<i<<"] element: ";
        cin>>arr[i];
    }
    cout<<"\n"<<"Before Bubble Sort: ";
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if (i!=n-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;

    BubbleSort(arr, n);
    return 0;  
}