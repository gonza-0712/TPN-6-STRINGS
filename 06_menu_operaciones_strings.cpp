#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// i. Longitud
int longitud(string cadena)
{
    return cadena.length();
}

// ii. Concatenacion
string concatenar(string cadena1, string cadena2)
{
    return cadena1 + cadena2;
}

// iii. Reverso
string reverso(string cadena)
{
    string resultado = "";

    for (int i = cadena.length() - 1; i >= 0; i--)
    {
        resultado += cadena.at(i);
    }

    return resultado;
}

// iv. Contar caracter
int contarCaracter(string cadena, char caracter)
{
    int cantidad = 0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena.at(i) == caracter)
        {
            cantidad++;
        }
    }

    return cantidad;
}

// v. Contar letras
int contarLetras(string cadena)
{
    int cantidad = 0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if (isalpha((unsigned char)cadena.at(i)))
        {
            cantidad++;
        }
    }

    return cantidad;
}

int main()
{
    int opcion;
    string cadena, cadena1, cadena2;
    char caracter;

    do
    {
        cout << "\\n===== MENU DE STRINGS =====" << endl;
        cout << "1. Calcular longitud de una cadena" << endl;
        cout << "2. Concatenar dos cadenas" << endl;
        cout << "3. Obtener reverso de una cadena" << endl;
        cout << "4. Contar un caracter" << endl;
        cout << "5. Contar cantidad de letras" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
            case 1:
                cout << "\\nIngrese una cadena: ";
                getline(cin, cadena);
                cout << "La longitud es: " << longitud(cadena) << endl;
                break;

            case 2:
                cout << "\\nIngrese la primera cadena: ";
                getline(cin, cadena1);
                cout << "Ingrese la segunda cadena: ";
                getline(cin, cadena2);
                cout << "La concatenacion es: "
                     << concatenar(cadena1, cadena2) << endl;
                break;

            case 3:
                cout << "\\nIngrese una cadena: ";
                getline(cin, cadena);
                cout << "El reverso es: " << reverso(cadena) << endl;
                break;

            case 4:
                cout << "\\nIngrese una cadena: ";
                getline(cin, cadena);
                cout << "Ingrese el caracter que desea contar: ";
                cin >> caracter;
                cout << "El caracter aparece "
                     << contarCaracter(cadena, caracter)
                     << " veces." << endl;
                break;

            case 5:
                cout << "\\nIngrese una cadena: ";
                getline(cin, cadena);
                cout << "La cantidad de letras es: "
                     << contarLetras(cadena) << endl;
                break;

            case 6:
                cout << "\\nPrograma finalizado." << endl;
                break;

            default:
                cout << "\\nOpcion incorrecta." << endl;
        }

    } while (opcion != 6);

    return 0;
}
