#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        int reverse = 0;

        while (N > 0)
        {
            int digit = N % 10;
            reverse = reverse * 10 + digit;
            N = N / 10;
        }

        cout << reverse << endl;
    }

    return 0;
}