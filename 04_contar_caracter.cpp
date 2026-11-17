#include <iostream>
#include <string>
using namespace std;

int contar(string texto, char letra)
{
    int cantidad = 0;

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto.at(i) == letra)
        {
            cantidad++;
        }
    }

    return cantidad;
}

int main()
{
    string texto;
    char letra;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Ingrese una letra: ";
    cin >> letra;

    cout << "Aparece " << contar(texto, letra) << " veces." << endl;
    return 0;
}
