# Tree Ninja

[_Fruit Ninja_](https://es.wikipedia.org/wiki/Fruit_Ninja) es un juego para celulares donde el jugador debe utilizar sus dedos para cortar las frutas que aparezcan en la pantalla antes de que caigan al piso o de lo contrario el jugador pierde una vida.

Como la gente se estaba aburriendo de jugar _Fruit Ninja_ los desarrolladores crearon una nueva version llamda _Tree Ninja_ en la que el jugador debe realizar un unico corte a un arbol planar. El jugador recibe un punto por cada parte en la que el arbol planar es dividido despues del corte. Un corte consiste en una linea recta que separa todas las aristas por las que pasa.

Dado un arbol planar, podrias calcular la maxima cantidad de puntos que podes conseguir?

## Entrada
Un entero $T$ $(1 <= T <= 10^4)$ representando la cantidad de casos de prueba.
Cada caso de prueba contiene:
- Una nueva linea con un entero $N$ $(1 <= N <= 10^4)$, la cantidad de nodos en el arbol planar.
- $N$ lineas con dos enteros $X$ e $Y$ $(-10^4 <= X, Y <= 10^4)$, las coordenadas del i-esimo nodo.
- $N-1$ lineas con dos enteros $U$ y $V$ $(1 <= U, V <= N)$, indicando una arista entre el nodo $U$ y $V$.

No hay tres puntos colineales en un mismo caso de prueba, nunca se cruzan dos aristas y la suma de $N$ sobre todos los casos de prueba no excede $10^4$.

## Salida
Un entero positivo P, la maxima cantidad de puntos que puede conseguir un jugador.

## Ejemplos
|Entrada|Salida|
|-|-|
|1|4|
|4||
|1 2||
|1 0||
|1 1||
|2 0||
|1 2||
|2 3||
|2 4||
