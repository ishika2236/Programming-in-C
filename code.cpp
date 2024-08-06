#include<bits/stdc++.h>
using namespace std;


int val (int num)
{
    return 1 + (num >> 31) - (-num >> 31);
}

int main()
{
    int n;
    cin >> n;

    int value = val(n);
    
    if(value == 1){
        cout << 0 <<endl;
    }
    if(value == 2){
        cout << 1 <<endl;
    }
    if( value == 0){
        cout << -1 <<endl;
    }

    return 0;

}