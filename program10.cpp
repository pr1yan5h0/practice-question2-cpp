#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10, z = 15;
    cout << "Addition of two integers: " << add(x, y) << endl;
    cout << "Addition of three integers: " << add(x, y, z) << endl;

    double a = 5.5, b = 10.2, c = 3.3;
    cout << "Addition of two doubles: " << add(a, b) << endl;
    cout << "Addition of three doubles: " << add(a, b, c) << endl;

    return 0;
}
