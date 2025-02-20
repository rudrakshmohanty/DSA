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

    int max = arr[0];
    int second_max = -1;

    for(int i=1; i<n; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
    }

    if(second_max == -1){
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second_max << endl;
    }

    return 0;
}