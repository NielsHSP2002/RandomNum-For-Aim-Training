#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;


char aimTrain[4][100] = {"Tracking", "Click timing", "Pasu tracking", "Aim correction" };

int main() {
    cout << "What should you focus on today in aim training?" << endl;
    int i;
    for (i=0; i<1; i++) {
        srand ( time(NULL) );
        int damn = rand() % 4;
        if (damn == 0) {
            cout << aimTrain[0] << endl;
        }
        else if (damn == 1) {
            cout << aimTrain[1] << endl;
        }
        else if (damn == 2) {
            cout << aimTrain[2] << endl;
        }
        else if (damn == 3) {
            cout << aimTrain[3] << endl;
        }
    }
    return 0;
}
