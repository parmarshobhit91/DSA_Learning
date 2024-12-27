#include<iostream>
#include<vector>
using namespace std;

//Linear search = find unique element in an array with the
// help of only one loop
int main() {
    vector <int> v = {1, 1, 2, 4, 5, 2, 4};
// to solve this we are using bitwise xor property
    int ans = 0;
    for(int val: v) {
        ans = ans ^ val;
    }
    cout << "Unique value in vector is : " << ans << endl;
    return 0;
}