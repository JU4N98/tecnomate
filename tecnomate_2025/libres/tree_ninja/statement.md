# K - Tree Ninja

[_Fruit Ninja_](https://es.wikipedia.org/wiki/Fruit_Ninja) es un juego para celulares donde el jugador debe utilizar sus dedos para cortar las frutas que aparezcan en la pantalla antes de que caigan al piso o de lo contrario el jugador pierde una vida.

Como la gente se estaba aburriendo de jugar _Fruit Ninja_ los desarrolladores crearon una nueva versión llamda _Tree Ninja_ en la que el jugador debe realizar un único corte a un arbol planar. El jugador recibe un punto por cada parte en la que el árbol planar es dividido después del corte. Un corte consiste en una línea recta que separa todas las aristas por las que pasa.

Dado un árbol planar ¿podrías calcular la máxima cantidad de puntos que podés conseguir?

## Entrada
Una nueva línea con un entero $N$ $(1 <= N <= 10^3)$, la cantidad de nodos en el árbol planar.

$N$ líneas con dos enteros $X$ e $Y$ $(-10^8 <= X, Y <= 10^8)$, las coordenadas del i-ésimo nodo.

$N-1$ líneas con dos enteros $U$ y $V$ $(1 <= U, V <= N)$, indicando una arista entre el nodo $U$ y $V$.

No hay tres puntos colineales y nunca se cruzan dos aristas.

## Salida
Un entero positivo P, la máxima cantidad de puntos que puede conseguir un jugador.

## Ejemplos
|Entrada|Salida|
|-|-|
|4|4|
|1 2||
|1 0||
|1 1||
|2 0||
|1 2||
|2 3||
|2 4||
