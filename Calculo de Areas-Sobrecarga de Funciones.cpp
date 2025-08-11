//Ana Estefany Quintanilla de Ponce-QP24002
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

//Calculo del área de un triangulo
float area(float base, float altura) {       //(dos argumentos tipo float)
    return (base * altura) / 2.0f;
}   

//Cálculo del área de un cuadrado
double area(double lado) {                    //(un argumento tipo double)
    return lado * lado;
}

//Cálculo del área de un rectangulo
int area(int largo, int ancho){               //(dos argumentos tipo int)
    return largo * ancho;
}

//Cálculo del área de un circulo
float area(float radio, bool esCirculo) {     //(dos argumentos, uno tipo float y otro tipo bool)
    if (esCirculo) {
        return 3.14159f * radio * radio;
    } else {
        return 0.0f;
    }
}

int main(){

    SetConsoleOutputCP(65001);

    int opcion;
    do {
        cout << "-----------------------------------";
        cout << "\n MENÚ DE CÁLCULO DE ÁREAS \n";
        cout << "1. Área de un triángulo\n";
        cout << "2. Área de un cuadrado\n";
        cout << "3. Área de un rectángulo\n";
        cout << "4. Área de un círculo\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cout << "-----------------------------------\n";

        switch(opcion) {
            case 1: {
                float base, altura;
                cout << "Ingrese la base del triángulo: ";
                cin >> base;
                cout << "Ingrese la altura del triángulo: ";
                cin >> altura;
                cout << "El área del triángulo es: " << area(base, altura) << endl;
                break;
            }
            case 2: {
                double lado;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "El área del cuadrado es: " << area(lado) << endl;
                break;
            }
            case 3: {
                int largo, ancho;
                cout << "Ingrese el largo del rectángulo: ";
                cin >> largo;
                cout << "Ingrese el ancho del rectángulo: ";
                cin >> ancho;
                cout << "El área del rectángulo es: " << area(largo, ancho) << endl;
                break;
            }
            case 4: {
                float radio;
                bool esCirculo;
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                cout << "¿Es un círculo? (1: Sí, 0: No): ";
                cin >> esCirculo;
                cout << "El área del círculo es: " << area(radio, esCirculo) << endl;
                break;
            }
            case 5:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while(opcion != 5);

    return 0;
}
/*                  --Sobrecarga de Funciones--
Es una caracteristica que permite definir varias funciones con el mismo nombre
pero con diferentes tipos o números de parámetros (diferente número o tipo de argumento).
Así, se puede utilizar el mismo nombre de función para realizar diferentes tareas*/