# Cocinando ando

La chef de un restaurante que aspira a una estrella Michelin quiere mostrar una selección de sus platos estrella para los inspectores. Para esto, ha asignado un presupuesto máximo B, y quiere maximizar el prestigio acumulado de los platos que muestra a los inspectores.

Para medir el prestigio de sus platos, la chef mantiene una lista de recetas, junto con sus costos e ingredientes. Para cada receta, un plato derivado se obtiene de un plato base agregando un ingrediente. La receta menciona dos piezas adicionales de información: el costo de aplicar la receta, además del costo del plato base, y el prestigio que la receta agrega al prestigio del plato base. La chef mide el prestigio en sus propias unidades, llamadas "unidades de prestigio".

Por ejemplo, una lista de recetas para hacer empanadas se ve así:

* empanada_queso empanada_base queso 1 2

* empanada_jamon_queso empanada_queso jamon 5 5

Aquí, empanada_base es un plato elemental, un plato sin receta asociada, un plato tan simple que su costo es insignificante (fijado en 0) y su prestigio también es 0. La chef puede obtener el plato derivado empanada_queso agregando el ingrediente queso al plato base empanada_base, por un costo de 1 peso y una ganancia de 2 unidades de prestigio. Una empanada_jamon_queso se obtiene de una empanada_queso agregando jamon, por un costo adicional de 5, y un prestigio de 5 agregado al prestigio del plato base; esto significa que el costo total de empanada_jamon_queso es 6 y su prestigio total es 7.

Una selección de platos estrella podría incluir, por ejemplo, tanto una empanada_queso como una empanada_jamon_queso. Tal selección tendría un prestigio total acumulado de 9, y un costo total acumulado de 7.

Armada con la lista de recetas y un presupuesto B, la chef quiere proporcionar una selección de platos estrella a los inspectores de Michelin para que el prestigio total acumulado de los platos sea maximizado, manteniendo su costo total acumulado como máximo B.

## Notas importantes

* Ningún plato puede aparecer dos veces en la selección de platos estrella.
* Cualquier plato que no aparezca como plato derivado en ninguna receta se considera un plato elemental, con costo 0 y prestigio 0.
* Un plato puede aparecer más de una vez como plato resultante en la lista de recetas; si hay más de una forma de obtener un plato, se elige siempre la que produce el menor costo total; si los costos totales son iguales, se debe elegir la que produce el mayor prestigio total.
* Las recetas son tales que ningún plato D puede obtenerse agregando uno o más ingredientes a D mismo.

## Entrada

* La primera línea consiste del presupuesto $B$ $(0 <= B <= 10000)$, un entero.
* La segunda línea consiste del número N $(0 <= N <= 1000000)$ de recetas, un entero.
* Cada una de las siguientes N líneas describe una receta, como los siguientes elementos separados por espacios simples: el nombre del plato derivado (string); el nombre del plato base (string); el ingrediente agregado (string); el precio agregado (entero); el prestigio agregado (entero).


Otros límites:

* puede haber como máximo 10 000 platos diferentes (elementales o derivados);
* los costos y prestigios en las recetas están entre 1 y 10000 (inclusive);
* las cadenas contienen como máximo 20 caracteres ASCII (letras, dígitos y '_' solamente).

## Salida

La salida debe consistir de dos líneas, cada una con un solo entero. En la primera línea: el prestigio máximo acumulado dentro del presupuesto. En la segunda línea: el costo mínimo acumulado correspondiente al prestigio máximo acumulado, necesariamente menor o igual al presupuesto.

## Ejemplos

|Entrada|Salida|
|-|-|
|15|25|
|6|15|
|empanada_queso empanada_base queso 1 2||
|empanada_tomate empanada_base tomate 5 10||
|empanada_clasica empanada_queso tomate 5 5||
|empanada_clasica empanada_tomate queso 1 2||
|empanada_bondiola empanada_clasica bondiola 7 6||
|empanada_picante empanada_queso aji 3 1||
