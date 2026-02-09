#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
   int testcase;
   cout<<"enter the testcase:";
   cin>>testcase;
   while(testcase--)
   {
    int n;
    cout<<"Enter the elements:";
    cin>>n;
    string s;
    cout<<"Enter the value:";
    cin>>s;

    int freq[26] = {0};
   for(int i = 0 ;i<n;i++)
   {
    freq[s[i] - 'a']++;
   }
    int MaxCount =0 ;
    char maxchar = 'a';
    for(int i =0 ;i<26;i++)
     {
        if(freq[i] > MaxCount)
        {
           MaxCount = freq[i];
           maxchar = char('a' + i);
        }
     }

     cout<<maxchar << " "<<MaxCount<<endl;
     


   }return 0;

}


