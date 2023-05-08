#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj dlugosc ciagu" << endl;
    cout << endl;
    int n;
    cin >> n;
    int tablica[n];

    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }

    int najmniejsza = tablica[0];
    int pozycja = 0;

    for (int i = 1; i < n; i++)
    {
        if (tablica[i] < najmniejsza)
        {
            najmniejsza = tablica[i];
            pozycja = i;
        }
    }

    int roznica = tablica[pozycja + 1] - najmniejsza;

    if (pozycja + 1 == n - 1)
    {
        cout << tablica[n - 1] - najmniejsza;
        return 0;
    }

    int najwiekszaroznica = 0;

    for (int i = pozycja + 2; i < n; i++)
    {
        if (tablica[i] - najmniejsza > roznica)
        {
            roznica = tablica[i] - najmniejsza;
        }
    }
    cout << endl;
    cout << roznica;

    return 0;
}