#include<iostream>
#include<map>
using namespace std;

// map<string, int> m;
// key value pair
// m[key] = value;
// key must be always unique
// map sort the data in ascending order or lexicographic manner i.e. alphabetically

int main(){
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    // m.emplace("camera", 25);
    m.erase("tv");

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("camera") != m.end()){
        cout << "Found \n";
    } else {
        cout << "Not found \n";
    }

    // cout << "count = " << m.count("laptop") << endl;
    // cout << "value of a key laptop : " << m["laptop"] << endl;

    return 0;
}