#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main() {
    // list <int> l = {1,2,3,4,5};
    list <int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    for(int val: l) {
        cout << val << " ";
    }
    cout << endl;
}

// deque<int> d = {1,2,3,4,5};

// all operations are same as list...

// list ---> DLL (random access not possible i.e. l[2] --> error)
// deque ---> dynamic arrays (random access possible i.e. d[4] --> gives respected value)
    