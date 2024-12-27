#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector <int> & v) {
   for(size_t i=0; i<v.size() /2; ++i) {
    swap(v[i], v[v.size()-1-i]);
   }
}

void printVector(vector <int> & v) {
    cout << "Values of vector are: " << endl;
    for(int val: v) {
        cout << val << endl;
    }
}

int main() {
    vector <int> v = {1, 2, 3, 4, 5};
    printVector(v);
    reverseVector(v);
    printVector(v);
}