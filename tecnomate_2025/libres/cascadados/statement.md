# Cascadados

¿Acaso un momento de felicidad no alcanza para toda una vida? ¿Acaso aferrarse a un instante no nos ayuda a contener el devenir del tiempo? ¿Acaso...?  

—¿Va a apostar o no, señor? —interrumpió el croupier, preparado para cerrar las apuestas.  

Demonios.  

Tengo solo tres segundos para calcular el valor esperado de tiradas necesarias para finalizar el juego, si quiero entrar en esta ronda. Probablemente sean dos más de los que necesito.  

Por suerte, conozco bien _cascadados_. Es un juego sencillo... o eso parece.

El juego inicia con un conjunto de dados cuyo número de caras puede variar. Cada ronda consiste en lanzar todos los dados que queden. Si en un lanzamiento ninguno muestra un 1, la ronda termina y se avanza a la siguiente conservando todos los dados. Pero si alguno de los dados obtiene un 1, ese/esos dado/s se eliminan del conjunto y -como si el azar despertara una reacción en cadena- se activa una _cascada_: volviendo a lanzar los dados restantes en esa misma ronda. Si en esa repetición aparecen nuevos 1, esos dados también se eliminan y se inicia una nueva cascada para la ronda en curso.

Lamentablemente, la casa impone un límite: por cada tirada solo puede iniciarse una _cascada_, sin importar la cantidad de dados mostrando un 1.

El juego se repite ronda tras ronda hasta que no queden dados. Quien apueste con el número de rondas más cercano para finalizar el juego se llevará el pozo.

Voy a ir por lo seguro: calcular, dado el conjunto inicial de dados, cuál es el número esperado de rondas adicionales (sin contar la primera) que el juego necesitará hasta que todos los dados hayan sido eliminados.

¡Piensa, cerebro, piensa! Si tan solo alguien me ayudara a calcularlo...

## Entrada
La primera línea contiene una expresión de la forma “Ad4 Bd6 Cd8 Dd10 Ed12 Fd20” donde A, B, C, D, E y F $(0 <= A, B, C, D, E, F, A+B+C+D+E+F <= 18)$ representan la cantidad de dados de 4, 6, 8, 10, 12, y 20 caras respectivamente en el conjunto inicial de dados.

## Salida
La salida consta de una línea, el número esperado de rondas (excluyendo la primera) requeridas para finalizar el juego, dado el conjunto inicial de dados. La salida siempre tendrá cinco dígitos después del punto decimal.

|Entrada|Salida|
|-|-|
|0d4 1d6 0d8 0d10 0d12 0d20|5.00000|

|Entrada|Salida|
|-|-|
|1d4 2d6 0d8 3d10 1d12 0d20|16.51845|

|Entrada|Salida|
|-|-|
|1d4 0d6 1d8 0d10 0d12 0d20|7.18182|
