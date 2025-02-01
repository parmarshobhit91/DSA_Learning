#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    // reverse(vec.begin(), vec.end());

    // reverse(vec.begin()+1, vec.end()+2);
    // in this there may be some issue 

    for(auto p: vec){
        cout << p << " ";
    }
    cout << endl;

    return 0;
}