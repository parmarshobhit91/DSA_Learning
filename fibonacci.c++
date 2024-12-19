#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number of terms upto which you want to print fibonacci series : " ;
    cin >> n;
    int a=0,b=1;
    cout << a << " " << b << " ";
    for(int i=2; i<n; i++) {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    return 0;
}