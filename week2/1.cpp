#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ; i++)
    {
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int ans = -1 ,ans2 = -1 ;
    int i,j;
    for(i = 0 ;i <arr[i]; i++)
    {
        if(arr[i] == key)
        ans = i ;

        break;
        
    }
    for(j = n-1 ;j >= 0 ;j--)
    {
         if(arr[j] == key)

         ans2 = j;
         break;
    }
    cout<<"";


}