#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe z przedzialu od 1 do 10^18" << endl;
    int n;
    cin >> n;
    int licznik = 0;

    for (int i = 0; i <= n; i++)
    {
        licznik++;
    }

    cout << "Odpowiedz to: " << licznik;
    return 0;
}