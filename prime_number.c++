#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int printPrime(int n1, int n2) {
    for(int i=n1; i<=n2; i++) {
        if(isPrime(i) == 1)
        cout << i << " ";
    }
}

int main()
{
    int a, n;
    cout << "Enter a number to check whether it is prime? " << endl;
    cin >> n;
    a = isPrime(n);
    if (a == 1)
        cout << n << " is prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    printPrime(1, 20);
    return 0;
}