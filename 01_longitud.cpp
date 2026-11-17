#include <iostream>
#include <string>
using namespace std;

int longitud(string texto)
{
    return texto.length();
}

int main()
{
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "La longitud es: " << longitud(texto) << endl;
    return 0;
}
