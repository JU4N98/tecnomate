# Vino en caja

Podemos hacer uso de programación dinámica, para representar la probabilidad de que se hayan resuelto una cantidad j de problemas al comienzo del minuto i de esta manera: dp[i][j]. Luego en cada momento, existirá una probabilidad P de avanzar al siguiente minuto con un problema resuelto más, y una probabilidad (1-P) de avanzar al siguiente minuto con la misma cantidad de problemas resueltos. Cabe aclarar que al llegar a tener N problemas resueltos, siempre se avanzará al minuto siguiente con la misma cantidad de problemas resueltos.
Finalmente, se deben sumar las probabilidades de llegar al minuto T con 0,1,...,N problemas resueltos.
