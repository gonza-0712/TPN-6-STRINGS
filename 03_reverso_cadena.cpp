#include <iostream>
#include <string>
using namespace std;

string reverso(string texto)
{
    string resultado = "";

    for (int i = texto.length() - 1; i >= 0; i--)
    {
        resultado += texto.at(i);
    }

    return resultado;
}

int main()
{
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Al reves: " << reverso(texto) << endl;
    return 0;
}
