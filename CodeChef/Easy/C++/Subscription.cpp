#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int subscriptions = (N + 5) / 6;
        int totalCost = subscriptions * X;

        cout << totalCost << endl;
    }

    return 0;
}