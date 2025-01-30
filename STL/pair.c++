#include<iostream>
#include<vector>
using namespace std;

int main() {
    // pair<int,int> p = {1,5};

    // pair<string,int> p = {"dumroo",5};

    // pair<pair<int,int>,int> p = {{2,10},5};

    // pair<string, string> p1 = {"shobhit", "parmar"};

    // cout << p.first.first << endl;
    // cout << p.first.second << endl;
    // cout << p.second << endl;
    // cout << p1.first << endl;
    // cout << p1.second << endl;

    // VECTOR OF PAIR
    
    vector<pair<int,int>> v = {{1,2}, {2,3}, {3,4}};

    v.push_back({4,5}); // insert the values of object created by us
    v.emplace_back(5,6); // in-place objects create

    for(auto p: v){
        cout << p.first << " " << p.second << endl;
    }
}