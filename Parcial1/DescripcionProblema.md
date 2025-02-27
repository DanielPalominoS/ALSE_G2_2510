# Evaluación: Cálculo de Distancias en 2D

## Descripción del Problema

En este ejercicio, debes escribir un programa en C++ que permita al usuario calcular la distancia entre un conjunto de puntos en un plano cartesiano. El programa debe ser capaz de:

1. **Leer las coordenadas de varios puntos**: Los puntos pueden ser ingresados manualmente o tomados de un conjunto predeterminado.
2. **Calcular la distancia euclidiana entre puntos**: El programa debe calcular la distancia entre dos puntos dados usando la fórmula de distancia euclidiana en el plano 2D.
3. **Encontrar la distancia más cercana desde un punto específico**: El programa debe identificar cuál de los puntos ingresados está más cerca de un punto dado por el usuario.
4. **Mostrar los resultados**: Finalmente, el programa debe mostrar el punto más cercano y la distancia a dicho punto.

### Fórmula de Distancia Euclidiana
La distancia entre dos puntos \( P_1(x_1, y_1) \) y \( P_2(x_2, y_2) \) se calcula mediante la siguiente fórmula:

\[
d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
\]

### Tareas a Realizar

1. **Completar la función `calcularDistancia`**: 
   - Esta función recibe dos puntos y debe calcular la distancia euclidiana entre ellos utilizando la fórmula mencionada anteriormente.
   
2. **Completar la función `leerPuntos`**: 
   - Esta función debe preguntar al usuario si desea ingresar los puntos manualmente. Si la respuesta es afirmativa, debe permitir que el usuario ingrese las coordenadas de cada punto. En caso contrario, debe usar un conjunto de puntos predeterminados.
   
3. **Completar la función `calcularDistanciaMasCercana`**: 
   - Esta función debe calcular cuál de los puntos dados está más cercano a un punto especificado por el usuario. 
   - Debe retornar la distancia mínima y el índice del punto más cercano.

4. **Completar la función `mostrarResultado`**: 
   - Esta función debe mostrar el punto más cercano y la distancia a dicho punto.

### Funciones Incompletas

En el código proporcionado, algunas funciones están incompletas. Debes completar estas funciones para que el programa funcione correctamente. Aquí está una breve descripción de cada una:

- **`calcularDistancia(Point p1, Point p2)`**: Calcula la distancia euclidiana entre dos puntos.
- **`leerPuntos(Point puntos[], int n)`**: Permite leer los puntos de manera manual o utilizar puntos predeterminados.
- **`calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)`**: Calcula la distancia más cercana a un punto dado por el usuario.
- **`mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)`**: Muestra el punto más cercano y la distancia a dicho punto.

### Restricciones

1. El número de puntos debe ser al menos 2.
2. Los puntos deben ser ingresados en formato `(x, y)`, donde `x` y `y` son valores numéricos reales.

### Entorno de Desarrollo

- Lenguaje: C++
- Herramientas recomendadas: C++11 o superior.

### Ejemplo de Ejecución

Supongamos que el usuario ingresa los siguientes puntos:

- Punto 1: (0, 0)
- Punto 2: (3, 4)
- Punto 3: (6, 8)

Y el punto del usuario es (1, 1). El programa debe calcular la distancia desde el punto (1, 1) a cada uno de los puntos dados y mostrar el punto más cercano.

**Salida esperada:**
```
¿Desea ingresar los puntos manualmente? (s/n): s Ingrese las coordenadas del punto 1 (x, y): 0 0 Ingrese las coordenadas del punto 2 (x, y): 3 4 Ingrese las coordenadas del punto 3 (x, y): 6 8

Ingrese las coordenadas del punto desde el que calcular la distancia (x, y): 1 1

El punto más cercano es: (0, 0) La distancia al punto más cercano es: 1.41421
```

---

## Instrucciones

1. **Descarga el código fuente proporcionado**.
2. **Completa las funciones faltantes** según lo que se describe más arriba.
3. Asegúrate de que el programa calcule correctamente la distancia entre los puntos y determine el punto más cercano.
4. Verifica que el programa maneje tanto los puntos ingresados manualmente como los predeterminados correctamente.
5. Realiza las pruebas necesarias para asegurar el funcionamiento correcto del programa.
6. **Subir el código completado** al repositorio cuando hayas terminado.

### Criterios de Evaluación

1. **Correctitud del Código**: El programa debe funcionar correctamente y proporcionar resultados precisos.
2. **Calidad del Código**: El código debe estar bien estructurado y ser fácil de entender.
3. **Manejo de Errores**: El programa debe manejar entradas inválidas y proporcionar mensajes de error claros cuando sea necesario.
4. **Cumplimiento de las Especificaciones**: El código debe cumplir con todas las especificaciones de la tarea.

---

¡Buena suerte!

