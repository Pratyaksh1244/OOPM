#include <iostream>
using namespace std;

class Addition {
private:
    int a, b, c;

public:
    void getdata();
};

void Addition::getdata() {
    cout << "Enter Value of a = " << endl;
    cin >> a;

    cout << "Enter Value of b = " << endl;
    cin >> b;

    c = a + b;

    cout << "Addition of a and b is = " << c << endl;
}

int main() {
    Addition p;
    p.getdata();
    return 0;
}

