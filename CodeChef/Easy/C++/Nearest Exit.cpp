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

        if (X <= 50)
        {
            cout << "LEFT" << endl;
        }
        else
        {
            cout << "Right" << endl;
        }
    }
}
