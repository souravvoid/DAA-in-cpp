#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void insertion(int arr[],int n)
{
    for(int i = 1 ; i < n ;i++)
    {
        int cur = arr[i];
        int prev = i -1;
        while(prev>=0 && arr[prev]>=cur)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev +1] = cur; 
    }
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion(arr, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}
