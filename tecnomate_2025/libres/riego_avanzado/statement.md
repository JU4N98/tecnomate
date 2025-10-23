# A - Riego Avanzado
El nono tiene una granja de $NxM$ celdas, y a su vez cuenta con un regador de dimensiones $KxK$. El regador se coloca en la esquina superior izquierda y comienza a regar cada subgrilla de $KxK$ celdas, por lo que ciertas celdas pueden ser regadas más de una vez. Se acerca el momento de sembrar y el nono tiene que decidir a qué celda asignar cada paquetes de semillas de forma de maximizar la ganancia. La ganancia está dada por la multiplicación de la cantidad de veces que pasa el regador por una celda y la cantidad de semillas sembradas en dicha celda.

## Entrada
Una línea con cuatro enteros: $N$, $M$ $(1 <= N, M<= 10^5, 1 <= N*M <= 10^5)$ las dimensiones de la granja, $K$ $(1<= K <= min(N,M))$ las dimensiones del regador y $P$ la cantidad de paquetes de semillas disponibles.

Una línea con $P$ enteros $C_i$ $(1 <= C_i <= 10^5)$ la cantidad de semillas en el i-ésimo paquete de semillas.

## Salida
Un entero con la máxima ganancia que se puede conseguir.

## Ejemplos
|Entrada|Salida|
|-|-|
|3 4 2 3|22|
|1 2 3||

En el caso de prueba 1 la cantidad de veces que cada celda es regada es la siguiente:

|||||
|-|-|-|-|
|1 |2 |2 |1|
|2 |4 |4 |2|
|1 |2 |2 |1|

Luego, la respuesta es $4*3 + 4*2 + 2*1 = 22$.
