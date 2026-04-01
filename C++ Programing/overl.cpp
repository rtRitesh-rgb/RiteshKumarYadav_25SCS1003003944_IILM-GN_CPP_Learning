#include <iostream>
using namespace std;

struct number {
    int value;

    number(int v) {
        value = v;
    }

    number operator + (number &N) {
        return number(value + N.value);
    }
};

int main() {
    number n1(5), n2(3);
    number n3 = n1 + n2;
    cout << n3.value;

    return 0;
}