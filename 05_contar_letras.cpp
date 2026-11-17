#include <iostream>
#include <string>
using namespace std;

int contarLetras(string texto)
{
    int cantidad = 0;

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto.at(i) != ' ')
        {
            cantidad++;
        }
    }

    return cantidad;
}

int main()
{
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Cantidad de letras: " << contarLetras(texto) << endl;
    return 0;
}
