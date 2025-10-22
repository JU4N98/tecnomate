# TOC

Como todos saben, Monica Geller tiene un Trastorno Obsesivo Compulsivo (TOC) con el orden y la limpieza. Últimamente, ha estado organizando todo en su apartamento (especias, toallas, e incluso las películas de Chandler) y asignando a cada ítem un "valor numérico" basado en algún criterio que solo ella entiende (quizás nivel de limpieza, fecha de caducidad o "sensación de orden").

Esto ha resultado en largas secuencias de números.

El TOC de Monica no la deja tranquila. Para sentirse satisfila, necesita encontrar "patrones perfectos" en sus secuencias. Para ella, un patrón perfecto es una **secuencia aritmética continua**, es decir, una subsecuencia de números consecutivos donde la diferencia entre cada número y el siguiente es siempre la misma.

Pero hay una condición más (¡obviamente, es Monica!). Para que ella esté *realmente* satisfecha y pueda dejar de organizar, el patrón debe continuar **perfectamente hasta el último elemento de la secuencia**.

De todos los posibles patrones aritméticos que terminan justo al final, Monica quiere encontrar el más largo, ya que un patrón más largo la tranquiliza más.

Tu tarea es ayudar a Monica a calmar su TOC. Dada una secuencia de números, debes encontrar la posición (índice) donde comienza la subsecuencia aritmética continua más larga que se extiende hasta el final.

## Entrada

Habrá múltiples casos de prueba. Cada caso de prueba consiste en dos líneas.

La primera línea contiene un único entero $N$ ($1 \le N \le 1000$), que especifica la longitud de la secuencia de Monica.

La segunda línea contiene una secuencia de $N$ enteros $X_i$ ($0 \le X_i \le 10^9$), separados por espacios.

## Salida

Para cada caso de prueba, imprime una única línea con el índice del primer miembro de la subsecuencia aritmética continua más larga que se extiende hasta el final de la secuencia dada.

El índice del primer elemento en la secuencia es siempre 1.

## Ejemplos

| Entrada | Salida |
|---|---|
|5|1|
|1 2 3 4 5 |6|
|7|2|
|1 2 3 4 5 8 8 ||
|3||
|7 5 2 ||
