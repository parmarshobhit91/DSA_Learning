#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[] = {'a', 'b', 'c', '\0'}; 
    // char str[] = "shobhit";

    // cout << str << endl;
    // cout << strlen(str) << endl;

    char str[12];

    cout << "Enter char array : ";
    // cin >> str;
    // ignores space consider termination of string  
    // cin.getline(str, 100);

    // we are now using delimiter so that we can use a special 
    // character after which compiler stops taking input

    // cin.getline(str, 100, '$');
    cin.getline(str, 12);

    cout << "Output is : " << str << endl;

    for(char ch: str){
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}