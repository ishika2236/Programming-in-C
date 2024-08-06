#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    int left=0;
    int maxnum=0;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        while(mp.size()>2){
            mp[arr[left]]--;
            if(mp[arr[left]]==0){
                mp.erase(arr[left]);
            }
            left++;
            
        }
        maxnum=max(maxnum,i-left+1);
        
    }
    cout<<maxnum<<endl;
}