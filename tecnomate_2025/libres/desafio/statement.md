# I - Desafío
Juampi es un profesor de programación competitiva apasionado con la geometría (pero con métodos de evaluación poco ortodoxos).  
Él quiere compartir esta pasión con sus alumnos, pero ellos consideran que la geometría es muy complicada, y por eso nunca lo intentan. Debido a esto, decidió proponerles un desafío, con la condición de que aquel que lo resolviera, aprobará la materia inmediatamente. Este desafío consiste en que él les daría tres enteros N, M y K para que encontraran tres puntos $(X_1, Y_1)$, $(X_2, Y_2)$ y $(X_3, Y_3)$, tal que $0 <= X_1,X_2,X_3 <= N$ y $0 <= Y_1,
Y_2, Y_3 <= M$ y el área del triángulo formado por estos puntos sea $\frac{NM}{K}$.  
José, uno de sus alumnos, quiere resolver el desafío para tener la recompensa, pero sus conocimientos no son suficientes ¿Podrías ayudarlo a aprobar la materia?


## Entrada
Una línea con tres enteros N, M y K $(1 <= N,M <= 10^9, 2 <= K <= 10^9)$.


## Salida
Si existen los puntos, imprime "SI", seguido de tres líneas, conteniendo los puntos X<sub>i</sub>,Y<sub>i</sub> (las coordenadas de los puntos, con un punto por línea). Si hay múltiples soluciones, imprima cualquiera.  
Si no existe solución, imprima "NO".


## Ejemplos

| Entrada | Salida |
|--------------|--------------|
| 4 3 3 |    SI   |
| |    1 0   |
|  |    2 3   |
|  |    4 1  |

| Entrada | Salida |
|--------------|--------------|
| 4 4 7 | NO      |
