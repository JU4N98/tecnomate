# Tree Ninja

El problema puede modelarse como: dado un conjunto de segmentos en 2D, hallar la linea que intersecte mayor cantidad de segmentos.

La primera obervacion para resolver el problema es que una de las lineas que pasa por dos puntos extremos de los segmentos es respuesta al problema.

Bien, entonces tenemos que probar todas las lineas posibles $O(N^2)$ y por cada una de ellas contar cuantos segmentos intersecta $O(N)$, lo que nos da una complejidad de $O(N^3)$. Dificil que entre en tiempo.

Como podemos optimizarlo? Acertaste, [_Polar/Radial Sort_](https://github.com/matramos/elrejunte/blob/master/notebook/secciones/geometria/radial_order.cpp)! Por cada punto del conjunto, ordenamos el resto en orden radial, luego por cada segmento tenemos que crear los eventos de entrada y salida. Entrada suma 1 a la cantidad de segmentos que intersectamos y salida resta 1 a la cantidad de segmentos que intersectamos. La complejidad total es $O(N^2 * log_2(N))$.
