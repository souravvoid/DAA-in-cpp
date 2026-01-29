#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void linearsolve(int arr[],int n,int key) {
    

    int comparisons = 0;
    bool found = false;

    
    for (int i = 0; i < n; i++) {
        comparisons++; 
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

   
    if (found) {
        cout << "Present " << comparisons << endl;
    } else {
        cout << "Not Present " << comparisons << endl;
    }
}

int main() {
    int t;
    cout << "Enter number of testcases: ";
    cin >> t;
    while (t--) {
        int  n;
    if (!(cin >> n)) return 0;

    int arr[n];
    cout<<"enter the elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout<<"Enter the key :"<<endl;
    cin >> key;
    linearsolve(arr,n,key);
    }
    return 0;
}