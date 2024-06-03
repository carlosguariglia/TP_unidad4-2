/*
Realizar un Programa Que rellene un array con los números primos comprendidos
 entre 1 y 100 y los muestre en pantalla
*/

#include <iostream>
using namespace std;

bool esprimo(int num);
void clearConsole();

int main()
{   
    const int MAX = 100; // MAX es la cantidad maxima de numeros primos que puede haber 
    int array[MAX];      // en MAX elementos (en 100 numeros el maximo podria ser que sean 100 primos)
    int indicearray=0;
    clearConsole();

    cout << "Los " << MAX << " primeros numeros primos son: " << endl << endl;
    
    
    for (int i = 0; i < MAX; i++)
    {   if (esprimo(i))      // se llama a la funcion esprimo() que devuelve 1 si lo es
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

bool esprimo(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
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

