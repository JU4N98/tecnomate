# Revolución Industrial
El problema puede modelarse como: dado un grafo no dirigido con tiempo en las aristas, donde algunos nodos tienen demandas y otros producción, cuál es el tiempo mínimo para satisfacer todas las demandas. Si fijamos la cantidad de minutos que podemos usar a $K$ y sabemos la distancia minima de las plantas a las ciudades, entonces podemos plantear la siguiente red de flujo:
- Agregar una arista con capacidad $prod_i$ desde $src$ a la $planta_i$.
- Agregar una arista con capacidad $dem_i$ desde $ciudad_i$ a $sink$.
- Si la distancia minima de la $planta_i$ a la $ciudad_j$ es menor o igual a $K$, agregar una arista de $planta_i$ a $ciudad_j$ con capacidad infinita.

Ahora calculamos el flujo máximo y si es igual a la suma de las demandas quiere decir que hay solución para $K$ minutos. Ahora solo queda calcular el mínimo tiempo, esto puede hacerse con una búsqueda binaria sobre $K$. La complejidad final es $O(log_2(M) * (C+P)*(C+P)*T)$.
