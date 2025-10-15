# Revolución Industrial

Estamos en el siglo XVIII en plena [_Revolución Industrial_](https://es.wikipedia.org/wiki/Revoluci%C3%B3n_Industrial) y trabajamos en la mayor empresa carbonífera del país. Sin embargo, tenemos dificultades para poder hacer los envíos de carbón a las ciudades a tiempo. El dueño de la empresa nos acaba de dar una última advertencia: o solucionamos el problema para fin de mes o podemos buscar un nuevo trabajo.

Para poder resolver el problema tenemos un mapa con la siguiente información:
- Las ciudades y sus demandas de carbón.
- Las minas de carbón y su producción mensual.
- Los trenes que conectan las ciudades y minas, y el tiempo de transporte.
¿Cual es el tiempo mínimo necesario para abastecer a todas las ciudades?

## Entrada
Una línea con cuatro enteros: $C$ $(1 <= C <= 100)$ con la cantidad de ciudades, $P$ $(1 <= P <= 5)$ con la cantidad de plantas de carbón de la empresa, $T$ $(1 <= T <= 200)$ la cantidad de trenes que existen y $M$ $(1 <= M <= 4*10^4)$ la cantidad de minutos que disponemos para hacer las entregas.

$C$ líneas con un entero $Demanda_i$, la demanda de la i-ésima ciudad $(1 <= Demanda_i <= 10^3)$.

$P$ líneas con un tnero $Producción_i$, la producción de la i-ésima planta $(1 <= Produccion_i <= 2*10^4)$.

T líneas con cuatro enteros describiendo cada uno de los trenes: $U$ y $V$ $(1 <= U,V <= C+P)$ los IDs de las ciudades que une el tren (puede usarse en ambas direcciones) y $Minutos$ $(1 <= Minutos <= 10^3)$ el tiempo de duración del viaje. Los ID de las ciudades van de los enteros $1$ a $C$ y los de las plantas de $C+1$ a $P$. Puede haber varios trenes disponibles para la misma ruta.

## Salida
Una línea con un entero, el tiempo mínimo para abastecer a todas las ciudades o en caso de ser imposible el string DESPEDIDO.

## Ejemplos
|Entrada|Salida|
|-|-|
|3 1 3 2 |2|
|1||
|1||
|2||
|5||
|1 4 1||
|2 4 1||
|2 3 1||

|Entrada|Salida|
|-|-|
|3 1 3 1 |DESPEDIDO|
|1||
|1||
|2||
|5||
|1 4 1||
|2 4 1||
|2 3 1||
