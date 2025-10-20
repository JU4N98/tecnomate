# Vino en Caja
Vino en Caja es un equipo de programación competitiva reconocido a nivel mundial (no realmente).
En estas competencias de programación, cada equipo recibe una cantidad N de problemas que debe buscar resolver en una cantidad T de minutos. Para esto, deben crear soluciones y enviarlas a un juez, que determinará si la solución tuvo o no éxito de forma instantánea.
Vino en Caja tiene una particularidad, confían más en el azar que en sus propios conocimientos. Debido a esto, nunca están seguros si los problemas que intentan resolver serán o no aceptados, sino que esto depende de una probabilidad P. Su estrategia es la siguiente, en cada minuto de la competencia el equipo intenta resolver un problema, y en caso de tener éxito avanza al siguiente, pero en caso de fallar, siguen intentándolo hasta resolverlo.
Debido a este particular método, sus entrenadores se ponen muy nerviosos al no tener idea de cuantos problemas serán capaces de resolver. Por esto, ellos te pidieron que calcules cual es el valor esperado de problemas que el equipo resolverá en una competencia.
Nota: si la competencia dura T minutos, solo pueden realizarse envíos en los minutos 0 a T-1, ya que en el minuto T la competencia habría finalizado.

## Entrada
Una línea con tres números N, P y T(1≤N,T≤2000, 0≤P≤1) representando la cantidad de problemas, la probabilidad de resolver un problema y el tiempo en minutos que dura la competencia respectivamente. Los números N y T son enteros, mientras que T es un número real con hasta dos dígitos después de la coma.

## Salida
Una línea con un número real, el valor esperado de problemas resueltos por el equipo al terminar la competencia. El error relativo debe ser menor a 10<sup>-6</sup>.

## Ejemplos

| Entrada | Salida |
|--------------|--------------|
| 1  0.50  1 | 0.5      |
| 1  0.50  4 | 0.9375       |
| 4  0.20 2 | 0.4      |