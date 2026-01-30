#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    bool swaped;
    for(int i = 0; i < n - 1; i++)
    {
        swaped = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swaped = true;
            }
        }
    if(!swaped)
    {
        break;
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

    bubblesort(arr, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
