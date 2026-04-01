#include <iostream>
using namespace std;

class complex {
    int real;
    int img;

public:
    complex(int r, int i) {
        real = r;
        img = i;
    }

    complex operator + (const complex &c) {
        return complex(real + c.real, img + c.img);
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    complex c1(2,3), c2(4,5);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}