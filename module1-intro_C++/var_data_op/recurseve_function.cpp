#include <iostream>
using namespace std;

// Recursive function to calculate factorial
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    unsigned long long fact = factorial(number);
    cout << "Factorial of " << number << " = " << fact << endl;
    //cout << "size of unsigned long long int "<<sizeof(unsigned  long int)<<endl;
    return 0;
}
