# Palabra Clave
Esta noche es el programa de televisión _Palabra Clave_, en el que dos jugadores se alternan turnos para descubrir una palabra que se encuentra completamente cubierta inicialmente. En cada turno el jugador elige una letra del alfabeto que todavía tiene chances de estar en la palabra, en caso de que haya una letra de ese tipo por descubrir se destapa una de sus ocurrencias. El jugador que descubre la última letra gana el juego.

Te invitaron a participar del programa de esta noche, pero el presentador les dijo sin querer la palabra clave a vos y a tu contrincante ¿Podés ganar si jugás en el primer turno y ambos juegan óptimamente?

## Entrada
Una línea con un entero $T$ $(1 <= T <= 1000)$, la cantidad de casos de prueba. Cada caso de prueba contiene una sola línea con un string $K$ $(1 <= |K| <= 26)$, la palabra clave.

## Salida 
Una línea por cada caso de prueba con el string ":)" en caso de que puedas ganar o ":(" en caso contrario.

## Ejemplos
|Entrada|Salida|
|-|-|
|2|:(|
|ANARAP|:)|
|FRUTAFRESCA||
