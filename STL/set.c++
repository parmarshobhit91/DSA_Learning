#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // set<int> s;

    // multiset<int> s;

    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(40);

    // cout << "Lower bound: " << *(s.lower_bound(4)) << endl;
    // cout << "Upper bound: " << *(s.upper_bound(20)) << endl;

    cout << s.size() << endl;

    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}