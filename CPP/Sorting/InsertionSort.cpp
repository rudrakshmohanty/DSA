#include<iostream>

using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    cout << "Sorted Array: ";
    cout << "[";
    for(int i=0; i<n; i++){
        cout << arr[i];
        if(i<n-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
}

int main(){
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter Element [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Unsorted Array: ";
    cout << "[";
    for(int i=0; i<n; i++){
        cout << arr[i];
        if(i<n-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
    InsertionSort(arr, n);
}