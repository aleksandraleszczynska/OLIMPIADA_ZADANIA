#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj ilosc samochodzikow" << endl;

    int ilosc;

    cin >> ilosc;

    float tablica[ilosc];

    for (int i = 0; i < ilosc; i++)
    {
        cin >> tablica[i];
    }

    for (int i = 0; i < ilosc; i++)
    {
        for (int j = 0; j < ilosc - 1; j++)
        {
            if (tablica[j] > tablica[j + 1])
            {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }

    for (int i = 0; i < ilosc; i++)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}
