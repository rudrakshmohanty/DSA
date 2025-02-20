#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<n<<endl;
    int arr[n];
    cout<<"Taking Elements ..."<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    set<int> s;
    cout<<"Checking for duplicate elements ..."<<endl;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    cout << "The unique elements are: ";
    for(auto& i : s){
        cout<< i << " ";
    }

}