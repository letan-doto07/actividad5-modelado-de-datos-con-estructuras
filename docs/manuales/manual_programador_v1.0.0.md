# Manual del programador v1.0.0

Este manual explica el uso de estructuras (`struct`) en C++ y cómo se utiliza el operador flecha (`->`) cuando trabajamos con punteros a estructuras. Incluye ejemplos y recomendaciones.

## Estructuras en C++

Una `struct` en C++ permite agrupar datos bajo un mismo tipo:

```cpp
struct Persona {
    std::string nombre;
    int edad;
};
```

Podemos crear una instancia y acceder a sus miembros usando el operador punto `.`:

```cpp
Persona p{"María", 21};
std::cout << p.nombre << " " << p.edad << "\n";
```

## Punteros a estructuras y operador `->`

Cuando tenemos un puntero a una estructura, usamos `->` para acceder a sus miembros:

```cpp
Persona *ptr = &p;
std::cout << ptr->nombre << " " << ptr->edad << "\n"; // equivalente a (*ptr).nombre
```

El operador `->` es una sintaxis conveniente equivalente a `(*ptr).miembro`.

## Ejemplo práctico (ver `src/main.cpp`)

En `src/main.cpp` hay un ejemplo que muestra:
- Declaración de una `struct` simple (Punto)
- Uso de punteros y `->`
- Una pequeña clase `PuntoProxy` que sobrecarga `operator->` para devolver un puntero interno (ejemplo avanzado)

## Recomendaciones

- Inicializa siempre los miembros de tus structs.
- Prefiere `std::optional` o clases con constructores cuando necesites seguridad en la inicialización.
- Documenta bien los contratos de las estructuras (valores válidos, invariantes).

