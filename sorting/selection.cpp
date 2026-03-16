#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selsort(int arr[], int n)
{
    for(int i= 0 ; i < n-1; i++)
    {
        int mins = i;
        for(int j = i+1  ;j<n; ++j)
        {
           if(arr[j] < arr[mins])
           {
               mins = j; //mind value 
           }
        }
    swap(arr[i],arr[mins]);//swap
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

    selsort(arr, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
