//ASCII code converter
#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Type a single character here: " << endl;
    cin >> letter;
    cout << static_cast<int>(letter);
    return 0;
}
