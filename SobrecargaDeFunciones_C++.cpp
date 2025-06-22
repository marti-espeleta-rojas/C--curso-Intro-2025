# include <iostream>

//declaración del mismo método, pero sobrecargado por su diferencia 
//en tipo y/o cantidad de argumentos
bool hornearPizza(double gradosCoccion);
bool hornearPizza(double gradosCoccion, std::string direccion);

int main()
{
    //declaración de variables
    double temperatura;
    std::string direccion;
    bool horneada;


    //toma de datos en consola
    std::cout << "Ingrese la temperatura de coccion de la pizza" << std::endl;
    std::cin >> temperatura;
    std::cout << "Ingrese la dirección de entrega o 0 si viene a la sucursal a retirar." << std::endl;
    std::cin >> direccion;

    //lógica encapsulada para operar dentro del programa
    if (direccion == "0" ){
        horneada = hornearPizza(temperatura, direccion);
    }
    horneada = hornearPizza(temperatura);
    horneada ? std::cout<<"Pizza horneada": std::cout<<"Temperatura insuficiente";
    std::cout << "La pizza sera entregada a " << direccion;
    return 0;
}

//declaración de métodos sobrecargados
bool hornearPizza(double gradosCoccion){
    if (gradosCoccion > 90){
        return true;
    }
    return false;
}

bool hornearPizza(double gradosCoccion, std::string direccion){
    if (gradosCoccion > 90)
    {
         
        return true;
    }
    return false;
}