#include <iostream>

using namespace std;

class Drib {
    int ch;
    int z;
public:
    Drib(int ch, int z) :ch(ch), z(z) {}
    
    void add(const Drib& other) {
        this->ch = this->ch * other.z + this->z * other.ch;
        this->z = this->z * other.z;
    }

    void minus(const Drib& other) {
        this->ch = this->ch * other.z - this->z * other.ch;
        this->z = this->z * other.z;
    }

    void multiply(const Drib& other) {
        this->ch = this->ch * other.ch;
        this->z = this->z * other.z;
    }

    void devide(const Drib& other) {
        this->ch = this->ch * other.z;
        this->z = this->z * other.ch;
    }

    void show() {
        cout << this->ch << "\n--\n" << this->z;
    }
};

int main()
{
    Drib drib1(1, 2);
    Drib drib2(2, 4);
    //drib1.add(drib2);
    drib1.show();
}