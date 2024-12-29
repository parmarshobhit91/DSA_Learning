#include<iostream>
using namespace std;

int main() {
    int x = 2;
    long n = -5;
    double ans = 1;
    if( n < 0 ) {
        x = 1 / x;
        n = -n;
    }

    while( n > 0 ) {
        if( n % 2 == 1 ) {
            ans = ans * x;
        }
        x = x * x;
        n = n / 2;
    }
    cout << ans;
}