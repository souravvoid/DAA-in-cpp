#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int partition(int arr[],int low,int high)
{
  int  i = low-1;
  int j = low;
  int pi = arr[high];
  for( j= low;j<=high-1;j++)
  {
    if(arr[j]<=pi)
    {
     i++;
     swap(arr[i],arr[j]);
    }
  }
 i++;
swap(arr[i],arr[high]);
return i;

}
void quicksort(int arr[],int low,int high)
{
  if(low<high)
  {
    int pi = partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
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

    quicksort(arr,0,n-1);// 0 start index and n-1 last index

    cout << " array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

