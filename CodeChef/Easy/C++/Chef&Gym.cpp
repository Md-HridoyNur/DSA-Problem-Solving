#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i=0; i<T;i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z >= X + Y) {
            cout << 2 << endl;
        }
        else if (Z >= X) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}