#include <iostream>
using namespace std;
#include <string>

void limitLoop() { //purely for some for loop practice
    int loopCount;
    string outLoop;
    cout << "The Loop\nEnter number of times to loop:";
    cin >> loopCount;
    cout << "And output the string: ";
    getline(cin, outLoop);
    for (int x = 1;x <= loopCount;x++) {
        cout << outLoop;
    }
}

int main() {
    int selectItem;
    bool sendBack = true;
    cout << "I don't know, this is a test!\nEnter a number, it won't do anything for now: ";
    for(;sendBack;) {
    cin >> selectItem;
        switch(selectItem){
            case 0:
                cout << "----HELP LIST 1----\n01.............Loop\n02.............Test\n03...........Unused\n04...........Unused\n05...........Unused\n";
                break;
            case 1:
                limitLoop();
                sendBack = false;
                break;
            case 2:
                cout << "Test 2";
                break;
            //case 3:
        }
    }
    return 0;
}