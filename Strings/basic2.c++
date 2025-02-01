#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    // string str1 = "shobhit parmar";
    // string str2 = " ! how are you...";


    // string str3 = str1 + str2;

    // cout << str3 << endl;

    // cout << str1 << endl;

    // for(char ch: str1){
    //     cout << ch << " ";
    // }
    // cout << endl;

    // string str1 = "shobhit";
    // string str2 = "shobhit";


    // cout << str1.length() << endl;
    // cout << (str1 == str2) << endl;

    // string str;
    // cout << "Enter string : ";
    // // cin >> str;
    // // getline(cin, str);
    // // getline(cin, str, '$');

    // cout << "String is : " << str << endl;

    string str = "shobhit parmar";

    cout << "Original string : " << str << endl;

    reverse(str.begin(), str.end());

    cout << "Reversed string : " << str << endl;

    return 0;
}