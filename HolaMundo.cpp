#include <iostream>

namespace primero{
    int x = 0;
}

int main() {
    int x = 1;
    std::cout<<"Hola Mundo!"<<std::endl<<"El número es: "<<primero::x; 
    //los dos puntos se conocen como operador de resolución de ámbito.
    return 0;
}