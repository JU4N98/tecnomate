# Frutas frescas
La primer observacion clave es que, una vez que un repartidor ya junto una fruta, su costo de juntar la siguiente es el mismo que para cualquier otro repartidor que estuviera ya en el restaurante.
Por lo tanto, podemos asumir que cada repartidor busca a lo sumo una fruta, y que tenemos repartidores infinitos en el restaurante que tienen coste "distancia manhattan de la fruta a la verduleria" (multiplicado por dos).
Queremos hacer una asignacion de cada fruta a exactamente un repartidor, y como es una asignacion 1 a 1, existe un algoritmo exactamente para esto: Hungarian.

