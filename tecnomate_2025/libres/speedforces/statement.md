# H - SpeedForces

_SpeedForces_ es la principal página de programación competitiva en la ciudad de Santa Fe, donde podés participar de competencias semanales para subir de ELO, o lo que es más común, bajar de ELO.

La más reciente novedad de _SpeedForces_ es el _SpeedPredictor_, lo último en predicción de cambios de ELO en competencias. Hay $N$ competencias este año y _SpeedPredictor_ ya ha generado las predicciones para tu cambio de ELO para cada una de ellas. Una predicción puede ser de de uno de los siguientes tipos:

1. $= E$, luego de la competencia tu ELO es igual a $E$.
2. $+ E$, luego de la competencia a tu ELO se le suma $E$.

¡Pero todavía hay más! Tu entrenador, Matías, esta interesado en saber cual sería tu máximo ELO si compitieras sólo en un rango $[L, R]$ de todas estas competencias, comenzando con $ELO=0$. Cabe aclarar que podés saltearte las competencias que quieras con tal de maximizar tu ELO, siempre respetando el orden de las mismas ¿Podés darle una mano a Mati para encontrar la respuesta a cada una de sus consultas?  

## Entrada
Una línea con un entero $N$ $(1 <= N <= 2*10^5)$, la cantidad de competencias en el año.

Una línea por cada competencia con un símbolo "=" o "+", y un entero $E$ $(-600 <= E <= +600)$:
- "= E" significa que tu ELO luego de la competencia es $E$.
- "+ E" significa que tu ELO luego de la competencia se le suma el entero $E$.

Una línea con un entero $C$ $(1 <= C <= 2*10^5)$, la cantidad de consultas de tu entrenador.

Una línea por cada consulta de tu entrenador con dos enteros $L$ y $R$ $(1 <= L <= R <= N)$.

## Salida
$C$ líneas, la i-esima línea debe contener un entero $M$ con la respuesta a la i-ésima consulta de Mati.

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
