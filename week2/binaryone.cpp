#include<iostream>
using namespace std;


int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;

    while(s <= e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;

    while(s <= e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
        {
            ans = mid;
            s = mid +  1;
        }
        else if(arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return ans;
}



int main()
{
    int testcases;
    cout<<"Enter the testcase:";
    cin>>testcases;
    while(testcases--)
    {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
          cin >> arr[i];
    }

    int key;
    cout<<"Enter the key:";
    cin>>key;
    

        int first = firstOcc(arr, n, key);
        int last = lastOcc(arr, n, key);

        int count = last - first + 1;
        cout << key << " appears " << count << " times" << endl;
}
    return 0;
}