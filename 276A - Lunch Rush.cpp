#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    int numbers[n][2] , joy[n];
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> numbers[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(numbers[i][1] > k){
            joy[i] = numbers[i][0] - (numbers[i][1] - k);}
        else
            joy[i] = numbers[i][0];
    }
    sort(joy,joy+n,greater<int>());
    cout << joy[0]<< endl;
    return 0;
}
