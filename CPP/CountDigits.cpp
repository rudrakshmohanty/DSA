#include<iostream>
// #include<bits/stdc++.h>/
using namespace std;

int countDigits(int n){
    int count=0;
    int num=n;
    while(n>0){
        int ld=n%10;
        if (ld != 0 && num%ld==0){
            count+=1;
        }
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin>>n;
    cout<<countDigits(n);
    return 0;
}