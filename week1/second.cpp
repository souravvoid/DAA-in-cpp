#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool binarySearch(vector<int> &arr, int x,int& comparsion) {
    int low = 0;
    int high = arr.size() - 1;
     comparsion = 0 ;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparsion++;
        // Check if x is present at mid
        if (arr[mid] == x)
        {
             return true;
        }          
        // If x greater, ignore left half
        if (arr[mid] < x)
        {
             low = mid + 1;
        }    
        // If x is smaller, ignore right half
        else
        {
             high = mid - 1;
        }
            
    }  
    return false;
}
int main() {
    int t;
    cout << "Enter number of testcases: ";
    cin >> t;
    while (t--) {
    
    cout<<"Enter the value for n:";
    int n;
    cin>>n;
    vector<int> arr(n) ;
    cout<<"Enter the elements:";
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int x ;
    cout<<"Enter the x value ";
    cin>>x;
    int comparsion;
    bool result = binarySearch(arr, x,comparsion);
    if(result) cout <<  "x:" << x << " "<< "Element  present in array"<<endl;
    else { cout<<"x :"<< x << "not found"<<endl;
    }
    cout << "Total  comparsion" << " "<< comparsion<<endl;
    }
    return 0;
}