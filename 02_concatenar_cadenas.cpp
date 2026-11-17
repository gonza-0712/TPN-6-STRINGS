#include <iostream>
#include <string>
using namespace std;

string unir(string a, string b)
{
    return a + b;
}

int main()
{
    string a, b;

    cout << "Ingrese el primer texto: ";
    getline(cin, a);

    cout << "Ingrese el segundo texto: ";
    getline(cin, b);

    cout << "Resultado: " << unir(a, b) << endl;
    return 0;
}
