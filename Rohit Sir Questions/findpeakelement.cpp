#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int maxind = 0;
    for(int i = 0;i < n; i++)
    {
        if(arr[i]> arr[maxind])
        {
            maxind=i;
        }
    }
    cout << maxind;
    return 0;
  
}