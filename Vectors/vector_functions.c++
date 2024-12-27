#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    // vector<int> v = {1,2,3}
    // vector<int> v(3,5);  where 3 is size and all the values are 5
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << v.size() << endl;

    v.pop_back();

    cout << "After pop back size : " << v.size() << endl;

    for(int val : v) {
        cout << val << endl;
    }

    cout << "Value at 2 : " << v.at(2) << endl;
}