#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<int> vec;
    
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // vec.emplace_back(6);

    // vec.pop_back();

    // for(int val: vec){
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // cout << vec.at(2) << endl;
    // cout << "front: " << vec.front() << endl;
    // cout << "back: " << vec.back() << endl;


    vector<int> vec1 = {1,2,3,4,5};

    // vector<int> vec2(3, 10);

    vector<int> vec2(vec1); 

    for(int val: vec2){
        cout << val << " ";
    }
    cout << endl;

    // vec2.erase(vec2.begin() + 2);
    // vec.erase(start, end)
    // deletes elements of vector in a range
    // in which start is included but end is not included
    // i.e. upto end - 1
    
    // vec2.erase(vec2.begin()+1, vec2.begin()+3);

    // v.insert(pos, value)
    // vec2.insert(vec2.begin() + 2,100);


    // vec2.clear();
    // for(int val: vec2){
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << vec2.size() << endl;
    // cout << vec2.capacity() << endl;
    // cout << vec2.empty() << endl;
    

    cout << "Vec.begin : " << *(vec2.begin()) << endl;
    cout << "Vec.end : " << *(vec2.end()) << endl;

    return 0;
}