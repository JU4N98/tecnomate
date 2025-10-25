# Palabra Clave
Cada estado del juego puede modelarse como un vector de 27 enteros, donde los primeros 26 representan las cantidades de cada letra y el ultimo representa la cantidad de errores dispobiles para cometer en un momento dado. Ahora solo queda calcular si un estado es ganador o perdedor, el caso base es si no hay letras para remover entonces es perdedor. El resto de los estados se determinan de la siguiente forma: 

1. Si un estado lleva a todos estados ganadores entonces es un estado perdedor. 
2. Si un estado lleva a al menos un estado perdedor entonces es un estado ganador.

Algunas optimizaciones necesarias para que entre en tiempo:

1. No nos interesa que tipo de letras están presentes, por lo que podemos ordenar los primeros 26 enteros.
2. Podemos usar la misma DP para todos los casos de prueba, evitando recalcular estados.

También existe solución en $O(N)$.
