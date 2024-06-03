/*
Realizar un Programa Que rellene un array con los números impares 
comprendidos entre 1 y 100 y los muestre en pantalla 
*/

#include <iostream>
using namespace std;

void clearConsole();

int main()
{   
    const int MAX = 100;
    int array[MAX];
    int indicearray = 0;

    clearConsole();
    cout << "Los " << MAX << " primeros numeros impares son: " << endl << endl;
    
    for (int i = 0; i < MAX; i++)
    {   if (i % 2 != 0)    
        {   array[indicearray] = i;
            indicearray++;
        }
    }

    for (int i = 0; i < indicearray; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl << endl;
    cout << "Presione ENTER para terminar";
    cin.get();
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