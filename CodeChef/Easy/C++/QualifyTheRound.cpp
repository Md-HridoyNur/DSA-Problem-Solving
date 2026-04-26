#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int X;
        cin >> X;
        int A, B;
        cin >> A >> B;

        if (A * 1 + B * 2 >= X)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }
}
