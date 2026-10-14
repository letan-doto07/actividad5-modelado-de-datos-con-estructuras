#include <iostream>
#include <string>

struct Punto {
    int x;
    int y;
};

// Ejemplo de una "clase proxy" que permite usar operator->
class PuntoProxy {
private:
    Punto p;
public:
    PuntoProxy(int x, int y) : p{x, y} {}
    // operator-> devuelve un puntero al Punto interno
    Punto* operator->() { return &p; }
};

int main() {
    // Uso directo de struct
    Punto a{3, 4};
    std::cout << "Punto a: (" << a.x << ", " << a.y << ")\n";

    // Puntero a struct y operador ->
    Punto *ptr = &a;
    std::cout << "Usando puntero: (" << ptr->x << ", " << ptr->y << ")\n";

    // Uso del proxy que sobrecarga operator->
    PuntoProxy proxy(7, 9);
    std::cout << "Proxy acceso con ->: (" << proxy->x << ", " << proxy->y << ")\n";

    return 0;
}
