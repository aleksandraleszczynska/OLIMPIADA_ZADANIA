#include <iostream>

using namespace std;

int main()
{
    int miasta, polaczenia;
    cin >> miasta;
    cin >> polaczenia;

    float tablica[polaczenia][2];

    for (int i = 0; i < polaczenia; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> tablica[i][j];
        }
    }

    cout << 2 * miasta - 2 * polaczenia;

    return 0;
}