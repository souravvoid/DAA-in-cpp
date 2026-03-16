#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//exponential search
int search(int arr[],int n,int key)
{
    int prev = 0;
    int next = 1;
    
        while(next < n && key>=arr[next]){
            prev = next;
            next = next * 2;
        }
        cout<<prev<<" "<<next<<endl;
    for(int i = prev;i<min(next,n-1);i++){
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
     
     for(int i=0 ;i <n ;i++)
     {
        cin>>arr[i];
    
     }

    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    

    int s = search(arr,n,key);
    if(s == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index "<<s<<endl;
    }


}