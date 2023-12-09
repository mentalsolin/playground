#include <iostream>
using namespace std;

class Cords {
private:
    int x;
    int y;
    int z;
public:
    inline void setX(int pX) {
        x = pX;
    }

    inline void setY(int pY) {
        y = pY;
    }

    inline void setZ(int pZ) {
        z = pZ;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    int getZ() {
        return z;
    }

    Cords() {};

    Cords(int pX, int pY, int pZ) {
        x = pX;
        y = pY;
        z = pZ;
    }

    void print() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }
};

int main()
{
    Cords cord1(3, 6, 2);
    
    cord1.print();
}