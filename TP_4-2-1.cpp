/*
Realizar un programa Que rellene un array con los 100 primeros números enteros
 y los muestre en pantalla

El cero es un numero entero por lo tanto se muestran los valores de 0 a 99

*/

#include <iostream>
using namespace std;

void clearConsole();

int main()
{   const int MAX = 100;
    int array[MAX];
    clearConsole();
    cout << "Los " << MAX << " primeros numeros enteros son: " << endl << endl;
    
    for (int i = 0; i < MAX; i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

void clearConsole() {
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}