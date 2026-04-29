#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Hexagon {
    public:
        double side;

        double getArea() const;
        double getPerimeter() const;
        void setSide(double);
        double getSide() const;

};

double Hexagon::getArea() const {
    return 3 * (sqrt(3)) * ((pow(side, 2)) / 2);
}

double Hexagon::getPerimeter() const {
    return 6 * side;
}

void Hexagon::setSide(double s) {
    side = s;
}

double Hexagon::getSide() const {
    return side;
}

int main() {
    Hexagon hex1, hex2, hex3;

    hex1.setSide(1.0);
    hex2.setSide(25.0);
    hex3.setSide(200.0);

    cout << fixed << setprecision(2);

    cout << "Hex1:\n    (Side: " << hex1.getSide() << ")\n";
    cout << "    (Area: " << hex1.getArea() << ")\n";
    cout << "    (Perimeter: " << hex1.getPerimeter() << ")" << endl;

    cout << "Hex2:\n    (Side: " << hex2.getSide() << ")\n";
    cout << "    (Area: " << hex2.getArea() << ")\n";
    cout << "    (Perimeter: " << hex2.getPerimeter() << ")" << endl;

    cout << "Hex3:\n    (Side: " << hex3.getSide() << ")\n";
    cout << "    (Area: " << hex3.getArea() << ")\n";
    cout << "    (Perimeter: " << hex3.getPerimeter() << ")" << endl;

    return 0;
}

/*
Output:
Hex1:
    (Side: 1.00)
    (Area: 2.60)
    (Perimeter: 6.00)
Hex2:
    (Side: 25.00)
    (Area: 1623.80)
    (Perimeter: 150.00)
Hex3:
    (Side: 200.00)
    (Area: 103923.05)
    (Perimeter: 1200.00)
*/
