#include <iostream>
#include <iomanip>

using namespace std;

void solve(int howManyNumbers, int numberSelected) {
    if (howManyNumbers <= 0 || numberSelected <= 0 || numberSelected > howManyNumbers) {
        cout << "This is not a possible lottery." << endl;
        return;
    }

    double odds = 1.0;
    for (int i = 1; i <= numberSelected; ++i) {
        odds *= (howManyNumbers - i + 1) / static_cast<double>(i);
    }

    cout << "Your chances of winning are 1 in " << static_cast<int>(odds) << endl;
}

int main(int argc, char **argv)
{
    int howManyNumbers;
    int numberSelected;

    cout << "How many numbers are printed on the lottery ticket? " << flush;
    cin >> howManyNumbers;
    cout << "How many numbers are selected in the lottery drawing? " << flush;
    cin >> numberSelected;

    cout << endl;

    solve(howManyNumbers, numberSelected);

    return 0;
}
