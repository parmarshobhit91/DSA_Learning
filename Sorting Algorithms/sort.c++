#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int arr[5] = {3,5,1,8,2};
    // vector<int> arr = {3,5,1,8,2};

    // sort(arr.begin(), arr.end());

    // for sorting in descending order
    // sort(arr.begin(), arr.end(), greater<int>());
    // for(int val: arr){
    //     cout << val << " ";
    // }

    vector<pair<int, int>> vec = {{3,1}, {2,1}, {2,2}, {7,1}, {5,2}};
    
    sort(vec.begin(), vec.end());

    for(auto p: vec){
        cout << p.first << " " << p.second ;
        cout << endl;
    }
    cout << endl;


    return 0;
}