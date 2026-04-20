#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int X;
        cin >> X;

        if (X > 1000) {
            X = (X * 10 / 100);
            cout << X << "\n";
        } 
        else {
            cout << 100 << "\n";
        }
    }

    return 0;
}