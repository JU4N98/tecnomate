# Cocinando ando
La observacion clave es que la lista de recetas genera un grafo dirigido, es decir, un grafo que no posee ciclos.
Gracias a esta caracteristica, podemos procesar la lista en orden topologico, y calcular el costo de cada receta. 
Con estos costos, podemos utilizar programacion dinamica para calcular el mayor prestigio que podemos obtener para cada presupuesto de 1 a B, y luego quedarnos con el valor ideal para nuestra respuesta.