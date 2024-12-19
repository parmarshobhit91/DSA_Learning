#include <iostream>
using namespace std;

int sumOfN(int n) {
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int factorial(int n) {
    int fact = 1;
    if(n > 0)
    {
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
    }
    else
    return 1;
}

int sumOfDigits(int n) {
   int sum = 0;
   int digit = 0;
   while (n > 0) {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;
    }
    return sum;
}

int binomialCoff(int n, int r) {
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    double fact = a / (b * c);
    return fact;
}

int main() {
    cout << sumOfN(5) << endl;
    cout << sumOfN(4) << endl;
    cout << factorial(5) << endl;
    cout << factorial(4) << endl;
    cout << factorial(0) << endl;
    cout << sumOfDigits(145) << endl;
    cout << sumOfDigits(245) << endl;
    cout << binomialCoff(7,3) << endl;
    cout << binomialCoff(8,2) << endl;
    return 0;
}