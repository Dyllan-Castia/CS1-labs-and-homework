#include <iostream>
using namespace std;

int MultiplyBy10AndAdd(int *, int *);

int main() {
    int x = 10, y = 5;
    int *xptr = &x;
    int *yptr = &y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "I will now swap the values of x and y and ";
    cout << "multiply them by 10. Then I will add them together.\n";

    cout << "Result: " << MultiplyBy10AndAdd(xptr, yptr) << endl;
    cout << "Now x = " << x << endl;
    cout << "Now y = " << y << endl;

    return 0;
}

int MultiplyBy10AndAdd(int *x, int *y)
{
int temp = *x; *x = *y * 10;
*y = temp * 10;
return *x + *y;
}
