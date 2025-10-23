# C - Verano

Se acerca el verano y las altas temperaturas en Santa Fe. Para que los estudiantes puedan estudiar y refrescarse, el decanato de la UTN-FRSF (Universidad Tecnológica Nacional - Facultad Regional Santa Fe) ha decidido construir una nueva piscina en uno de los patios de la facultad.

La piscina debe tener una forma **rectangular**. El área total de la superficie, $C$, ya está predeterminada por el presupuesto y el espacio disponible.

La empresa constructora que ganó la licitación ha entregado una lista de posibles longitudes (en metros) que pueden usar para los lados de la piscina, debido a sus materiales y métodos de construcción. Han estudiado el caso y **garantizan** que se puede construir una piscina con el área exacta $C$ utilizando dos longitudes de esa lista.

Un estudiante de Ingeniería en Sistemas que está ayudando en el proyecto ha hecho algunas observaciones interesantes:
1.  Todas las longitudes de los lados disponibles en la lista de la constructora son **números primos**.
2.  El área total $C$ de la piscina es siempre un producto de dos números primos **distintos**. (Esto también significa que la piscina nunca será un cuadrado).

Tu tarea es ser más rápido que el estudiante y encontrar qué dos longitudes de la lista se deben usar para construir la piscina.

## Entrada

La primera línea de entrada contiene un entero $C$ ($1 \le C \le 10^{18}$), el área de la superficie de la piscina.

La segunda línea contiene un entero $M$ ($1 \le M \le 2 \cdot 10^5$), la cantidad de posibles longitudes de lado ofrecidas por la constructora.

La tercera línea contiene una lista de $M$ primos $P_i$ ($1 < P_i < 10^9$), únicos y separados por espacios, que representan las longitudes de lado ofrecidas.

Todas las medidas están expresadas en las mismas unidades.

## Salida

Imprime una única línea con las dos longitudes de lado de la lista ofrecida que pueden usarse para construir la piscina.

La primera longitud de lado debe ser más pequeña que la segunda.

## Ejemplos

| Entrada | Salida |
|---|---|
|15|3 5|
|5||
|7 2 5 11 3||
