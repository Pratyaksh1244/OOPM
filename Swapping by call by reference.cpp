#include <iostream>
using namespace std;

void swap(int& c, int& d);

int main() {
    int a, b;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;

    cout << "Before Swapping a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "After Swapping a = " << a << " and b = " << b << endl;

    return 0;
}

void swap(int& c, int& d) {
    int temp;
    temp = c;
    c = d;
    d = temp;
}

