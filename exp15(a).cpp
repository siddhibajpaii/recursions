#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
   
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = factorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    return 0;
}

//Output:
//Enter a non-negative integer: 6
//Factorial of 6 is: 720
