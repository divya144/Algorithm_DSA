/*
Frequency of array elements
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
     {
        cin>>arr[i];
        mp[arr[i]]++;
     }
     unordered_map<int,int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    
}
