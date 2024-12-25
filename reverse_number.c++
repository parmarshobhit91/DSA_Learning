#include <iostream>
using namespace std;
int main() {
    int num = 123;
        int digit=0;
        int reverseNumber = 0;
    while(num > 0) {
        digit = num % 10;
        reverseNumber = reverseNumber * 10 + digit;
        num = num / 10;
    }
    cout << "Reversed Number is : " << reverseNumber << endl;
    return 0;
}