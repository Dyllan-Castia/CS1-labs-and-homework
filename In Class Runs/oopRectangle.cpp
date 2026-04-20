/*
Dyllan Castia
4/20/26
This program:
1. Declares a class: Rectancle
2. Declares data for the rectangle
3. Prototypes member functions to work with that data
4. Defines member functions for data handling.
5. Asks the user for input and stores the input in the Class data using member "set" member
functions.
6. Displays the modified class data using the "get" member functions.
*/
#include <iostream>
using namespace std;

class Rectangle {
        private:
            double width;
            double length;

        public:
            void setWidth(double);
            void setLength(double);
            double getWidth() const;
            double getLength() const;
            double getArea() const;
    };

    void Rectangle::setWidth(double w) {
        width = w;
    }

    void Rectangle::setLength(double len) {
        length = len;
    }

    double Rectangle::getWidth() const {
        return width;
    }

    double Rectangle::getLength() const {
        return length;
    }

    double Rectangle::getArea() const {
        return length * width;
    }

int main() {
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "This program will calculate the area of a rectangle." << endl;
    cout << "What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}

/*
Output:
This program will calculate the area of a rectangle.
What is the width? 12
What is the length? 15.5
Here is the rectangle's data:
Width: 12
Length: 15.5
Area: 186
*/
