#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << n << endl;
    cout << "Taking Elements ... " << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if (n < 2) {
        cout << "Invalid input, array should have at least two elements." << endl;
        return 0;
    }

    bool is_sorted = true;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            is_sorted = false;
            break;
        }
    }

    if(is_sorted){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}