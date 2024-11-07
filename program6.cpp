#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }

    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of two numbers (5 + 10): " << calc.sum(5, 10) << endl;
    cout << "Sum of three numbers (5 + 10 + 15): " << calc.sum(5, 10, 15) << endl;
    cout << "Sum of four numbers (5 + 10 + 15 + 20): " << calc.sum(5, 10, 15, 20) << endl;

    return 0;
}
