# include <iostream>

int main() {

    double x = 3;
    double y = 4;
    double z;

    //Función max
    z = std::max(x, y);
    std::cout << z;

    //Función min
    z = std::min(x, y);
    std::cout << std::endl << z;
    return 0;
}

