// #include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    // int temp = arr[mini];
    // arr[mini] = arr[i];
    // arr[i] = temp

    cout<<"\n"<<"After Selection Sort: ";
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
    cout<<"\n"<<"Before Selection Sort: ";
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if (i!=n-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;

    SelectionSort(arr, n);
}