#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        int result = a + b + c;
        cout << "Base class sum: " << result << endl;
        return result;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        int result = a + b + c;
        cout << "Derived class sum: " << result << endl;
        return result;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    baseObj.sum(1, 2, 3);

    derivedObj.sum(4, 5, 6);

    derivedObj.Base::sum(7, 8, 9);

    Base* ptr = &derivedObj;
    ptr->sum(10, 11, 12);

    return 0;
}
