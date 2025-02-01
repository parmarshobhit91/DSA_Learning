#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // multimap<string, int> m;

    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);

    // m.erase(m.find("tv"));

    unordered_map<string, int> m;
    
    m.emplace("tv", 100);
    m.emplace("fridge", 100);
    m.emplace("camera", 100);
    m.emplace("laptop", 100);


    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}