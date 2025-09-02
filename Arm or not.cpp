#include <iostream>
using namespace std;

// Function to calculate the power of a number
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of powers of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

