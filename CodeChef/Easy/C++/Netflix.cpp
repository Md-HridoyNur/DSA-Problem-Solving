#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int A, B, C, X;
        cin >> A >> B >> C >> X;

        if (A + B >= X || A + C >= X || B + C >= X) {
            cout << "YES" << "\n";
        } 
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}