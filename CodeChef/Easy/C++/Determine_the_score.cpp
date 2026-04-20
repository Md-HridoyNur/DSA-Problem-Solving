#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int X, N;
        cin >> X >> N;

        int score = (X / 10) * N;
        cout << score << endl;
    }

    return 0;
}