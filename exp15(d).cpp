#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        int reversed = reverseNumber(number);
        cout << "Reversed number: " << reversed << endl;
    }

    return 0;
}

//Output:
//Enter a positive integer: 1923
//Reversed number: 3291
