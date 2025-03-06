
#include <iostream> // Incluir la biblioteca iostream para entrada y salida

// Definición de una estructura llamada Point
struct Point {
  int x, y; // Coordenadas x e y del punto
};

int main() {
  // Declarar e inicializar dos variables de tipo Point
  Point p1 = {10, 20}; // Punto 1 con coordenadas (10, 20)
  Point p2 = {-1, 3};  // Punto 2 con coordenadas (-1, 3)
  Point p4 = {0, 0};   // Punto 4 con coordenadas (0, 0)

  // Imprimir las coordenadas del punto 1
  std::cout << "Point 1 (" << p1.x << ", " << p1.y << ")\n";

  // Imprimir las coordenadas del punto 2
  std::cout << "Point 2 (" << p2.x << ", " << p2.y << ")\n";

  // Modificar la coordenada x del punto 2
  p2.x = -5;

  // Imprimir las coordenadas del punto 2 después de la modificación
  std::cout << "Point 2 después de modificar x (" << p2.x << ", " << p2.y
            << ")\n";

  // Crear un nuevo punto y asignar valores a sus coordenadas
  Point p3;
  p3.x = 7;
  p3.y = 14;

  // Imprimir las coordenadas del punto 3
  std::cout << "Point 3 (" << p3.x << ", " << p3.y << ")\n";

  return 0; // Retornar 0 para indicar ejecución exitosa
}