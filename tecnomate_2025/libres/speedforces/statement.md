# _SpeedForces_

_SpeedForces_ es la principal pagina de programacion competitiva en la ciudad de Santa Fe, donde podes participar de competencias semanales para subir de ELO, o lo que es mas comun, bajar de ELO.

La mas reciente novedad de _SpeedForces_ es el _SpeedPredictor_, lo ultimo en prediccion de cambios de ELO en competencias. Hay $N$ competencias este año y _SpeedPredictor_ ya ha generado las predicciones para tu cambio de ELO para cada una de ellas. Una prediccion puede ser de de uno de los siguientes tipos:

1. $= E$, luego de la competencia tu ELO es igual a $E$.
2. $+ E$ luego de la competencia tu ELO es igual a $E+1$.

Pero todavía hay más! Tu entrenador, Matias, esta interesado en saber cual seria tu maximo ELO si compitieras solo en un rango $[L, R]$ de todas estas competencias. Cabe aclarar que podes saltearte las competencias que quieras con tal de maximizar tu ELO. Podes darle una mano a Mati para encontrar la respuesta a cada una de sus consultas?  

## Entrada
Una linea con un entero $N$ $(1 <= N <= 10^5)$, la cantidad de competencias en el año.

Una linea por cada competencia con un simbolo "=" o "+", y un entero $E$ $(-600 <= E <= +600)$:
- "= E" significa que tu ELO luego de la competencia es $E$.
- "+ E" significa que tu ELO luego de la competencia se le suma el entero $E$.

Una linea con un entero $C$ $(1 <= C <= 10^5)$, la cantidad de consultas de tu entrenador.

Una linea por cada consulta de tu entrenador con dos enteros $L$ y $R$ $(1 <= L <= R <= N)$.

## Salida
$C$ lineas, la i-esima linea debe contener un solo entero $M$ con la respuesta a la i-esima consulta de Mati.

## Ejemplos
|Entrada|Salida|
|-|-|
|5|3|
|+ -2|5|
|= 3||
|= -2||
|+ 2||
|+ -1||
|2||
|1 2||
|1 5||
