#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
//stability version of count sort using prefix sum

void  prefixcountsort(int arr[],int n)
{
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
   for(int i =0 ;i<maxval;i++)
   {
    count[i] = count[i] + count[i-1];

   }
   int output[n];
   for(int i= n-1;i>=0;i--)
   {
    output[count[arr[i]]-1 ] = arr[i];
    count[arr[i]]--;
    
      for (int i = 0; i < n; i++)
        arr[i] = output[i];

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

    prefixcountsort(arr,n);// 

    cout << " array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
