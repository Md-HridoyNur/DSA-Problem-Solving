#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int R1, R2, R3, R4;
        cin >> R1 >> R2 >> R3 >> R4;

        if (R1 + R2 + R3 + R4 == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
}
