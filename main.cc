#include <iostream>
using namespace std;

int main() {
    int loopCount = 0;
    cout << "I don't know, this is a test!\nPlease enter a number of times to loop something:";
    cin >> loopCount;
    for (int x = 1; x <= loopCount; x++) {
        cout << x << "\n";
    }
    return 0;
}