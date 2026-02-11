/*
Dyllan Castia
2/11/26
This program asks the user: 
1. The pallet's weight by itself
2. The pallet's weight after widgets are stacked on it.
Then: 
1. Calculates and displays the number of widgets on the pallet.
*/
#include <iostream>
#include <iomanip> // formatting: setw(), setprecision(x), fixed.
using namespace std;

int main() {
    double palletWeight, allWidgetWeight, totalWidgets, widgetWeight = 12.5;

    cout << "How much does the pallet weigh by itself?" << endl;
    cin >> palletWeight;
    cout << "How much does the pallet weigh with the widgets stacked on it?" << endl;
    cin >> allWidgetWeight;
    totalWidgets = (allWidgetWeight - palletWeight) / widgetWeight;
    cout << "There are " << totalWidgets << " stacked on the pallet. Congratulations.";
    return 0;
}
/*
Output:
How much does the pallet weigh by itself?
5
How much does the pallet weigh with the widgets stacked on it?
755
There are 60 stacked on the pallet. Congratulations.
*/
