/*
Problem : 
You have been given A and B in range. Find the product of all numbers in the range.
1<=A<=100,000 and A<=B<=100,000
You need to return the answer as a string in the form of, “C x 10^D”
If C has more than 10 digits, then output C as 12345…12345 x 10^D
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> mult(vector<int>A,int x)
{
    cout<<x<<endl;
    int carry=0;
    for(int i=0;i<A.size();i++)
    {
        int prod = A[i]*x+carry;
        A[i] = prod%10;
        carry = prod/10;
    }
    while(carry)
    {
        A.push_back(carry%10);
        carry=carry/10;
    }
    return A;
}
int main() {
    int left,right;
    cin>>left>>right;
    vector<int>result;
    int temp=left;
    while(temp)
    {
        result.push_back(temp%10);
        temp=temp/10;
    }
    for(int i=left+1;i<=right;i++)
    {
        result = mult(result,i);
    }
    int count_zero=0;
    for(int i=0;i<result.size()-1;i++)
    {
        if(result[i]==0 and result[i+1]!=0)
        {
            count_zero++;
            break;
        }
        else if(result[i]!=0)
            break;
        else
            count_zero++;
    }
    for(int i=result.size()-1;i>=count_zero;i--)
        cout<<result[i];
    cout<<" x 10^"<<count_zero<<endl;
}
