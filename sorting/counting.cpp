#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void countsort(int arr[],int n)
{ 
    // find the maximum element
    int maxval =0;
    for(int i =0 ;i<n;i++)
    {
       maxval =max(maxval,arr[i]);
    }
    int count[maxval+1];
    for(int i =0 ;i<=maxval;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int j =0;
    for(int i =0 ;i<=maxval;i++)
    {
        while(count[i]>j)
        {
            arr[j] = i;
            j++;
        }
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

    countsort(arr,n);// 0 start index and n-1 last index

    cout << " array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
