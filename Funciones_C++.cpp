# include <iostream>
# include <ctime>

using std::string;
using std::cout;

//Declarando la función felizCumpleanos
void felizCumpleanos(string nombre, int edad);

int main ()
{
    string nombre;
    int edad;
    cout << "Ingresa tu nombre: ";
    std::cin >> nombre;
    cout << "Ingresa tu edad: ";
    std::cin >> edad;
    felizCumpleanos(nombre, edad);
    return 0;
}

//Creando la primer función en C++.
void felizCumpleanos(string nombre, int edad){
    cout << "Que los cumplas feliz" << std::endl;
    cout << "Que los cumplas feliz" << std::endl;
    cout << "Que los cumplas " << nombre << "!" << std::endl;
    cout << "Que los cumplas feliz :)" << std::endl;;
    
    cout << "Felicidades! Cumpliste los " << edad << " anios!";
}