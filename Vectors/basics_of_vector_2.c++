#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    // vector<int>::iterator it;
    // for(it=v.begin(); it!=v.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    //     vector<int>::reverse_iterator it;
    // for(it=v.rbegin(); it!=v.rend(); it++){
    //     cout << *(it) << " ";
    // }

// instead of above syntax we can just use the below
// written simpler syntax i.e. 

    for(auto it = v.rbegin(); it!=v.rend(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}