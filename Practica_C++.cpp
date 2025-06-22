# include <iostream>
# include <vector>
#include <string>
/*
//typedef std::string cadena_t;
//Hacemos lo mismo pero usando using.
using cadena_t = std::string;

int main()
{
    using std::cout;
    using std::endl;
    cadena_t juan = "Juan";
    cout<<"Bienvenido!"<<endl;
    cout<<juan;
    return 0;
}
*/

/*
int main() 
{

    //Declaración de usings
    using std::string;
    using std::cout;
    using std::getline;
    using std::cin;

    //Declaración de variables
    string nombre;
    int edad;

    //Toma del nombre en la consola
    cout << "Ingrese su nombre";
    getline(cin >> std::ws, nombre);

    //Toma de la edad en la consola
    cout << "Ingrese su edad";
    cin >> edad;

    std::cout << "Hola, " << nombre << std::endl;
    std::cout <<"Tu edad es: " << edad;
}
    */

    //declarando usings

    using std::cout;
    int main() {
        int calificacion = 75;
        calificacion == 75 ? cout << "Aprobaste" : cout << "Fallaste";
    }

